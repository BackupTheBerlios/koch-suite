<?
  /* Functions for the "Koch-Suite" by
   * Michael Lestinsky <michael@zaphod.rhein-neckar.de>, October 2000
   * $Id: functions.inc,v 1.3 2000/10/31 00:17:38 michael Exp $
   */

  include "./include/config.inc";

  /* --- Functions --- */


  function parse_mmrecipe($fd) {
    /* scan a recipe until it's end
     * $fd: read from this filedescriptor
     * return a rather complex 4-dimensional array, 
     * read the source to understand it's format
     */
    $bar            = 0;
    $zutaten        = array();
    $instruction    = "";
    $zutaten_header = "/^(-{5}|M{5})-*([a-z0-9äöüß!\?:\. \*]*)[-=@]*$/i";
    $rezept_ende    = "/^(-{5}|M{5})[@-]*$/";

    while ($line = fgets($fd, 1024)) {
      if (preg_match($rezept_ende, $line)) {
        /* Found the end of the recipe */
        break;
      } else {

        if ($seen_title != 1 and ereg("Title: (.*)", $line, $foo)) {
          $title = trim($foo[1]);
          $seen_title = 1;

        } else if ($seen_categories != 1 and 
                   ereg("Categories: (.*)", $line, $foo)) {

          $categories = split(", *", $foo[1]);
          $seen_categories = 1;
          while(isset($categories[$bar])) {
            $categories[$bar] = trim($categories[$bar]);
            $bar++;
          }

        } else if ($seen_yield != 1 and 
                   ereg("(Servings|Yield): (.*)", $line, $foo)) {

          $yield = trim($foo[2]);
          $seen_yield = 1;

        } else if (preg_match("/^ *$/", $line) and $seen_ingr == 0) {
          # Skip this line

        } else if (preg_match($zutaten_header, $line, $foo)) {
          $j = array("title" => strtoupper($foo[2]), "ingredients" => getingr($fd));
          array_push ($zutaten, $j);
          $seen_ingr = 1;

        } else if ($seen_title == 1 and 
                   $seen_categories == 1 and 
                   $seen_yield == 1 and
                   $seen_ingr == 0 ) {
          /* lets look for the ingredients */ 
          $j = array("title" => "Zutaten:", "ingredients" => getingr($fd));
          array_push ($zutaten, $j);
          $seen_ingr = 1;

        } else {
          /* Ok, treat the Rest as "instruction" */
          $instruction .= trim($line) . "\n";

        }
      }
    }

    return array("title" => $title,
                 "category" => $categories,
                 "yield"    => $yield,
                 "zutaten"  => $zutaten,
                 "anleitung" => $instruction);
  }


  function parse_ingredient($line) {
    /* parse each line */
    if (ereg("([ 0-9\.\/]{7}) (..) ([a-zA-Züöä0-9 \/\(\)-;:]*)", $line, $foo)) {
      return array("quant"  => trim($foo[1]), 
                   "unit"   => trim($foo[2]), 
                   "ingred" => trim($foo[3]));
    } else return 0;
  }


  function getingr ($fd) {
    /* read the ingredients 
     * return a 2-dim Array $a[count][ingr-spec]
     * where count is a plain integer-counter, specifying more or less
     * the linenumber of the ingredient and ingr-spec is one of "quant",
     * "unit" or "ingred".
     */
    $a = array();

    while ($line = fgets($fd, 1024)) {
      #if (preg_match("/^\s*$/", $line))
      #  break;
      if (($b = parse_ingredient($line)) != 0) {
        array_push ($a, $b);
      } else {
        break;
      }
    }
    return $a;
  }


  function format_recipe($rezept) {
    /* return a String, which contains the formatted recipe */

    $str  = "Titel: " . $rezept["title"] . "\n".
            "Kategorien:";

    foreach ($rezept["category"] as $cat) {
      $str .= " " . $cat;
    }
    
    $str .= "\n";

    $str .= "Anzahl: " . $rezept["yield"] . "\n\n";

    /* Zutaten: */

    foreach ($rezept["zutaten"] as $z) {
      $str .= $z["title"] . "\n";
      foreach ($z["ingredients"] as $j) {
        $rline = pad_left ($j["quant"] , " ", 7) . " " .
                 pad_right($j["unit"]  , " ", 2) . " " .
                 pad_right($j["ingred"], " ", 28) . "\n";
        $str .= $rline;
      }
      $str .= "\n";
    }

    $str .= "Kochanleitung:\n\n";
    $str .= $rezept["anleitung"]; 

    return $str . "\n";
  }



  function pad_left($str, $pad, $length) {
    /* Pad a String from the left side with $pad to a length of $length
     * or if to long: cut it from the rigth to a length of $lenght.
     */
    if (strlen($str) > $length) {
      // snip
    } else {
      while (strlen($str) < $length) {
        $str = $pad . $str;
      }
    }
    return $str;
  }


  function pad_right($str, $pad, $length) {
    /* Pad a String from the rigth side with $pad to a length of $length
     * or if to long: cut it from the rigth to a length of $lenght.
     */
    if (strlen($str) > $length) {
      // snip
    } else {
      while (strlen($str) < $length) {
        $str .= $pad;
      }
    }
    return $str;
  }

?>
