<?
  /*
   * $Id: en.inc,v 1.4 2001/05/30 19:52:43 michael Exp $
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
      You will need PHP compiled with MySQL-support as standalone
      interpreter for the commandline-tools. For the webinterface you need
      PHP installed as CGI or Apache-module.
EOT;

  $Lang['Language']['Title']	= "Language Setting";
  $Lang['Language']['Text'][0]	= <<<EOT
      The Koch-Suite is multilingual starting with release 0.5.
      To choose another lanuage, adjust your browser (i.e. Mozilla: Edit
      -> Preferences -> Navigator -> Languages).
      If the language you specified does exist you will see all following
      pages in the requested language. Otherwise the default language
      (German "de") will be used.
EOT;

  $Lang['License']['Title']	= "Lizenz";
  $Lang['License']['Pre'][0]	= <<<EOT
      The entire Koch-Suite-package is released unter the terms under the
      terms of a BSD-style license.
EOT;

  $Lang['License']['Post'][0]	= "";

  /* 
   * Help:
   */

  $Lang['Helptext']['General']	= <<<EOT
    <p class="top">
      Dieses Programmpaket besteht aus drei wesentlichen Komponenten:
      einer groﬂen Bibliothek, die alle Konvertierungs- und
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
        You can search the database for terms in
          <ul>
            <li>the menu-titles</li>
            <li>the categories</li>
            <li>the ingredient list</li>
          </ul>
        The result is a list of all recipes containing the specified term
        in the chosen field.
        Choose "Search" from the mainmenu, enter the term into the form,
        choose from "Search in" where to search for that term an click 
        onto the "Start Search"-button.
        Since version <i>0.5</i> you can combine several terms by "AND"
        (uppercase!). So we can finally search for 
        <code>Muffins AND Choc</code>
EOT;
  $Lang['Helptext']['WWW']['part'][1]['Title']  = "Recording- and Editing-Interface";
  $Lang['Helptext']['WWW']['part'][1]['Text']   = <<<EOT
        This interface allows you to edit saved recipes or record new
        ones. Numbers must use <code>.</code> (dot) as decimal seperator.
        Units should be valid 
        <a href="units.php" target="units" onclick="units();">Mealmaster-,
        RezKonv-units or defined aliases and must be seperated by a space
        character from the quantity.
EOT;

  $Lang['Helptext']['Feedback']['Title']	= "Feedback";
  $Lang['Helptext']['Feedback']['Text'][0]	= <<<EOT
      We have a mailinglist for users and developers,
      <i>koch-suite@zaphod.rhein-neckar.de</i>. This mailinglist is
      public. Only subscribed addresses are alowed to write there.
EOT;
  $Lang['Helptext']['Feedback']['Text'][1]      = <<<EOT
      To subscribe to this mailinglist send a mail to
      <i>koch-suite-request@zaphod.rhein-neckar.de</i>, subject:
      &raquo;<code>subscribe</code>&laquo;. (Of course without the quotes!)
EOT;

?>
