<?
  /*
   * $Id: en.inc,v 1.3 2001/05/22 00:15:52 michael Exp $
   *
   * Define English text-constants.
   *
   * This file is subject to the license as included in ../LICENSE
   * (c) 2001 Michael Lestinsky
   */

  /* Menu */
  $Lang['Insert']		= "Insert";
  $Lang['Help']			= "Help";
  $Lang['Info']			= "Info";

  $Lang['Title']		= "Title";
  $Lang['Yield']		= "Servings";
  $Lang['Cat'] 			= "Categories";
  $Lang['Ingred']		= "Ingredients";
  $Lang['Units']		= "Units";
  $Lang['Preparation']		= "Preparation";
  $Lang['Text']			= "Text";
  $Lang['Description']		= "Description";
  $Lang['Alias']		= "Alias";
  $Lang['UnitInfo']		= "Unit Info";

  $Lang['FormApply']		= "Apply";
  $Lang['FormMoreIngr']		= "Additional ingredientlist";
  $Lang['FormReset']		= "Reset form";

  $Lang['Delete']		= "Delete";
  $Lang['PrintVers']		= "Printable version";
  $Lang['Close']		= "Close";

  $Lang['Mainmenu']['Title']		= "Mainmenu";
  $Lang['Mainmenu']['PlsChoose']	= "Please choose from the mainmenu";
  $Lang['Search']['Search']	= "Search";
  $Lang['Search']['For']	= "Search for";
  $Lang['Search']['In']		= "Search in";
  $Lang['Search']['Go']		= "Start search";
  $Lang['Search']['Result']	= "Searchresult";

  $Lang['Search']['Menutitle']	= "Menutitle";
  $Lang['Search']['Categories']	= "Categories";
  $Lang['Search']['Ingredients']	= "Ingredients";
  $Lang['Search']['NoResult']	= "Result was empty.";

  $Lang['Recipe']['Edit']	= "Edit recipe";
  $Lang['Recipe']['Delete']	= "Delete recipe";

  $Lang['AllRecipes']		= "All recipes";
  $Lang['CatChoose']		= "Category-chooser";

  $Lang['Homepage']['Title']	= 'Homepage';
  $Lang['Homepage']['Text'][0]	= <<<EOT
      <a href="http://milliways.ma.choin.net/~michael/koch-suite/">http://milliways.ma.choin.net/~michael/koch-suite/</a>:
      Up-to-date informations about this project an the currently newest
      releases of the <i>Koch-Suite</i> may be found here.
EOT;

  /* 
   * Infos: 
   */

  $Lang['Requirements']['Title']	= 'Requirements';
  $Lang['Requirements']['Text'][0]	= 'Required Software:';

  $Lang['Requirements']['Software'][0]	= '<a href="http://www.mysql.org">MySQL</a> (3.22 and 3.23 tested),';
  $Lang['Requirements']['Software'][1]	= '<a href="http://www.php.net">PHP</a> (Version 4), with MySQL-support,';
  $Lang['Requirements']['Software'][2]	= 'a Webserver, which supports PHP (i.e. <a href="http://www.apache.org">Apache</a>)';

  $Lang['Requirements']['Text'][1]	= 'Tested Operating Systems (alphabetical Order):';

  $Lang['Requirements']['OSes'][0]	= 'FreeBSD 4.2';
  $Lang['Requirements']['OSes'][1]	= 'Linux (Debian 2.2)';
  $Lang['Requirements']['OSes'][2]	= 'OpenBSD 2.8';

  $Lang['Requirements']['Text'][2]	= <<<EOT
      Für die Kommandozeilen-Tools ist PHP mit MySQL-Unterstützung als
      Standalone-Interpreter notwendig. Für das Web-Interface muss PHP als
      CGI oder als Apache-Modul installiert sein.
EOT;

  $Lang['Language']['Title']	= "Spracheinstellung:";
  $Lang['Language']['Text'][0]	= <<<EOT
      Seit Version 0.5 ist die Koch-Suite mehrsprachig. Um eine andere
      Sprache auszuw&auml;hlen, stellt man im Browser einfach die
      gew&uuml;nschte Sprache ein (z.B. Mozilla: Edit -> Preferences ->
      Navigator -> Languages). Wenn die gew&uuml;nschte Sprache existiert,
      werden die Seiten in dieser Sprache ausgegeben. Andernfalls wird auf
      die Standard-Sprache (Deutsch) zur&uuml;ckgegriffen.
EOT;

  $Lang['License']['Title']	= "Lizenz";
  $Lang['License']['Pre'][0]	= <<<EOT
      Das gesamte Paket der Koch-Suite steht unter einer BSD-artigen
      Lizenz.
EOT;

  $Lang['License']['Post'][0]	= "";

  /* 
   * Help:
   */

  $Lang['Helptext']['General']	= <<<EOT
    <p class="top">
      Dieses Programmpaket besteht aus drei wesentlichen Komponenten:
      einer großen Bibliothek, die alle Konvertierungs- und
      Ausgabe-Funktionen bereitstellt, (mehr oder weniger als triviale
      Wrapper um die Bibliothek) den Kommandozeilen-Tools und dem
      Web-Frontend.
    <p>
EOT;

  $Lang['Helptext']['CL']['Title']	= "Kommandozeilen-Tools";
  $Lang['Helptext']['CL']['commands'][0]['Name'] = "mmimport";
  $Lang['Helptext']['CL']['commands'][0]['Text'] = <<<EOT
          <i>Import von Rezepten.</i> Der Input wird auf dem
          Standard-Eingabe-Kanal (<code>STDIN</code>) erwartet.
          Die Rezepte werden dabei aus umgebendem Text extrahiert
          und k&ouml;nnen sowohl im Meal-Master- als auch im
          <a href="http://home.t-online.de/home/ufetzer/">REZKONV</a>-Format
          sein. Siehe auch <code>mmimport(1)</code>
EOT;
  $Lang['Helptext']['CL']['commands'][1]['Name'] = "rezept";
  $Lang['Helptext']['CL']['commands'][1]['Text'] = <<<EOT
          Suche Rezepte in der Datenbank und gebe sie als
          Latex-Source, im Meal-Master-Format oder als lesbaren Text in
          eine Datei oder auf die Standard-Ausgabe aus.
          Siehe <code>rezept(1)</code>.
EOT;
  $Lang['Helptext']['CL']['commands'][2]['Name'] = "rk2mm";
  $Lang['Helptext']['CL']['commands'][2]['Text'] = <<<EOT
          Konvertiere REZKONV- in Meal-Master-Rezepte.
          <code>rk2mm</code> fungiert dabei als Filter zwischen der
          Standard-Eingabe und der Standard-Ausgabe.
          Siehe <code>rk2mm(1)</code>.
EOT;

  $Lang['Helptext']['WWW']['Title']	= "Web-Frontend";
  $Lang['Helptext']['WWW']['part'][0]['Title']	= "Such-Interface";
  $Lang['Helptext']['WWW']['part'][0]['Text']	= <<<EOT
        Die Datenbank kann nach Stichwörtern in
          <ul>
            <li>den Men&uuml;-Titeln</li>
            <li>den Kategorien der Rezepte</li>
            <li>der Zutatenliste</li>
          </ul>
        durchsucht werden. Es wird eine Liste an Rezepten zur Auswahl
        angezeigt, die den gew&uuml;nschten Suchbegriff beinhalten. Dazu
        gibt man im Suchinterface den Suchbegriff in das Formular ein, wählt
        unter <i>Suchen in</i> das passende Suchfeld und klickt auf
        <i>Suche starten</i>. <br>
        Seit Version <i>0.5</i> ist auch die Verknüpfung von mehreren
        Suchbegriffen durch <code>AND</code> möglich.
        Damit lässt sich jetzt z.B. nach <code>Schoko AND Muffins</code>
        suchen.
EOT;
  $Lang['Helptext']['WWW']['part'][1]['Title']  = "Eingabe- und Editier-Interface";
  $Lang['Helptext']['WWW']['part'][1]['Text']   = <<<EOT
        Rezepte k&ouml;nnen mit diesem Interface erfasst und editiert
        werden. Zahlenangaben in der Zutatenliste muessen mit
        &quot;<code>.</code>&quot (Punkt)
        als Dezimaltrenner angegeben werden. Die Einheiten-Angaben
        m&uuml;ssen g&uuml;ltige
        <a href="units.php" target="units" onclick="units();">Mealmaster-,
        RezKonv-Einheiten oder ein dazu definierter Alias</a>
        sein und m&uuml;ssen durch ein Leerzeichen von der Mengenangabe
        getrennt werden.
EOT;

  $Lang['Helptext']['Feedback']['Title']	= "Feedback";
  $Lang['Helptext']['Feedback']['Text'][0]	= <<<EOT
      Für die User und Entwickler existiert eine Mailingliste,
      <i>koch-suite@zaphod.rhein-neckar.de</i>. Diese Mailingliste
      ist &ouml;ffentlich. Es darf aber nur an diese Liste schreiben, wer
      sie auch aboniert (&quot;subscribe&quot;) hat.
EOT;
  $Lang['Helptext']['Feedback']['Text'][1]      = <<<EOT
      Um sich auf der Mailingliste zu subscriben schickt man eine EMail an
      <i>koch-suite-request@zaphod.rhein-neckar.de</i> mit
      folgendem Subject/Betreff: &raquo;<code>subscribe</code>&laquo;.
      (Nat&uuml;rlich ohne die Quotes darum!)
EOT;

?>
