<?
  /*
   * $Id: en.inc,v 1.2 2001/05/16 00:26:04 michael Exp $
   *
   * Define English text-constants.
   *
   * This file is subject to the license as included in ../LICENSE
   * (c) 2001 Michael Lestinsky
   */

  /* Menu */
  $Lang['Insert']       = "Insert";
  $Lang['Help']         = "Help";
  $Lang['Info']         = "Infos";

  $Lang['Title']        = "Title";
  $Lang['Yield']        = "Yield";
  $Lang['Cat']		= "Cagetories";
  $Lang['Ingred']	= "Ingredients";
  $Lang['Units']	= "Units";
  $Lang['Preparation']  = "Preparation";
  $Lang['Text']		= "Text";
  $Lang['Description']  = "Description";
  $Lang['Alias']	= "Alias";
  $Lang['UnitInfo']	= "Information on used units";

  $Lang['FormApply']    = "Import recipe";
  $Lang['FormMoreIngr'] = "Additional ingredient list";
  $Lang['FormReset']    = "Reset form";

  $Lang['Delete']	= "Delete";
  $Lang['PrintVers']    = "Printable version";
  $Lang['Close']	= "Close";

  $Lang['Mainmenu']['Title']     = "Menu";
  $Lang['Mainmenu']['PlsChoose'] = "Please choose from the menu";
  $Lang['Search']['Search'] = "Search";
  $Lang['Search']['For']    = "Search for";
  $Lang['Search']['In']     = "Search in";
  $Lang['Search']['Go']     = "Start search";
  $Lang['Search']['Result'] = "Searchresult";

  $Lang['Search']['Menutitle']   = "Menutitle";
  $Lang['Search']['Categories']  = "Category";
  $Lang['Search']['Ingredients'] = "Ingredients";
  $Lang['Search']['NoResult']    = "No hits.";

  $Lang['Recipe']['Edit']        = "Edit recipe";
  $Lang['Recipe']['Delete']      = "Delete recipe";

  $Lang['AllRecipes']   = "All recipes";
  $Lang['CatChoose']    = "Choose category";

  $Lang['Homepage']     = <<<EOT
    <h3>Homepage</h3>
    <p>
      <a href="http://milliways.ma.choin.net/~michael/koch-suite/">http://milliways.ma.choi
n.net/~michael/koch-suite/</a>:
      Current informations about this project and the newest versions of
      the <i>Koch-Suite</i> may be found there.
    </p>
EOT;

  $Lang['Reqirements']  = <<<EOT
    <h3>Requirements:</h3>
    <p>
      Required Software:
    </p>
    <ol>
      <li><a href="http://www.mysql.org">MySQL</a> (3.22 and 3.23
          testet),</li>
      <li><a href="http://www.php.net">PHP</a> (Version 4), with
          MySQL-support,</li>
      <li>an webserver which supports PHP. (i.e. <a
          href="http://www.apache.org">Apache</a>)</li>
    </ol>

    <p>
      Tested Operating Systems (alphabetical order):
    </p>
    <ul>
      <li>FreeBSD 4.2</li>
      <li>Linux (Debian 2.2)</li>
      <li>OpenBSD 2.8</li>
    </ul>
    <p>
      You will need PHP with MySQL-support as standalone interpreter for
      the commandline tools. The web-interface requires PHP as CGI or as
      Apache-module.
    </p>
EOT;

  $Lang['Language']     = <<<EOT
    <h3>Language settings:</h3>
    <p>
      As of version 0.5 the <i>Koch-Suite</i> is m17n-able. To change the
      language, simply change your browsers settings. (i.e. Mozilla: Edit -> 
      Preferences -> Navigator -> Languages). 
      If the requested language is supported, you will see this pages in
      that language, otherwise we will fallback to the standard-language
      (German).
    </p>
EOT;

  $Lang['License1']     = <<<EOT
    <h3>Lizenz:</h3>
    <p>
      This entire package is subject to a BSD-style license:
    </p>
EOT;

  $Lang['License2']     = <<<EOT
    </p>
EOT;

  $Lang['Helptext']	= <<<EOT
    <h2>Help:</h2>
    <p class="top">
      This package contains three components: a big library which contains
      all convert- and output-functions, and (as more or less trivial
      wrappers around that library) the commandline-tools and as third the
      web-frontend.
    <p>
EOT;

  $Lang['CLHelp']       = <<<EOT
    <h3>Commandline-Tools</h3>
    <dl>
      <dt><code>mmimport</code></dt>
          <dd><i>Import recipes.</i> Der Input wird auf dem
          Standard-Eingabe-Kanal (<code>STDIN</code>) erwartet.
          Die Rezepte werden dabei aus umgebendem Text extrahiert
          und k&ouml;nnen sowohl im Meal-Master- als auch im
          <a href="http://home.t-online.de/home/ufetzer/">REZKONV</a>-Format
          sein.
          Siehe auch <code>mmimport(1)</code></dd>
      <dt><code>rezept</code></dt>
          <dd>Suche Rezepte in der Datenbank und gebe sie als
          Latex-Source, im Meal-Master-Format oder als lesbaren Text in
          eine Datei oder auf die Standard-Ausgabe aus.
          Siehe <code>rezept(1)</code>.
      <dt><code>rk2mm</code></dt>
          <dd>Konvertiere REZKONV- in Meal-Master-Rezepte.
          <code>rk2mm</code> fungiert dabei als Filter zwischen der
          Standard-Eingabe und der Standard-Ausgabe.
          Siehe <code>rk2mm(1)</code>.</dd>
    </dl>
EOT;

  $Lang['WWWHelp']      = <<<EOT
    <h3>Web-Frontend</h3>
    <dl>
      <dt>Search-interface:</dt>
        <dd>You can search through the database by
          <ul>
            <li>Menu-Titles</li>
            <li>Categories</li>
            <li>Ingredients</li>
          </ul>
        You will receive a list of recipes. 
        Click onto "Search" in the Menu, enter the wished term and choose
        from "Search in" where to look for that term. Click onto "Start
        Search". Thats it.<br>
        As of version <i>0.5</i> it is possible to combine several terms
        by <code>AND</code>. Now you can search for i.e. <code>Choc AND
        Muffins</code>. Please note, that capitalization is ignored on
        searchterms, but is important for <code>AND</code>.
        </dd>
      <dt>Eingabe- und Editier-Interface:</dt>
        <dd>Rezepte k&ouml;nnen mit diesem Interface erfasst und editiert
        werden. Zahlenangaben in der Zutatenliste muessen mit
        &quot;<code>.</code>&quot (Punkt)
        als Dezimaltrenner angegeben werden. Die Einheiten-Angaben
        m&uuml;ssen g&uuml;ltige
        <a href="units.php" target="units" onclick="units();">Mealmaster-,
        RezKonv-Einheiten oder ein dazu definierter Alias</a>
        sein und m&uuml;ssen durch ein Leerzeichen von der Mengenangabe
        getrennt werden.
        </dd>
    </dl>
EOT;

  $Lang['Feedback']     = <<<EOT
    <h3>Feedback, Support</h3>
    <p>
      Für die User und Entwickler existiert eine Mailingliste,
      <i>koch-suite@zaphod.rhein-neckar.de</i>. Diese Mailingliste
      ist &ouml;ffentlich. Es darf aber nur an diese Liste schreiben, wer
      sie auch aboniert (&quot;subscribe&quot;) hat.
    </p>
    <p>
      Um sich auf der Mailingliste zu subscriben schickt man eine EMail an
      <i>koch-suite-request@zaphod.rhein-neckar.de</i> mit
      folgendem Subject/Betreff: &raquo;<code>subscribe</code>&laquo;.
      (Nat&uuml;rlich ohne die Quotes darum!)
    </p>
EOT;


?>
