<?php
  /*
   * $Id: de.inc,v 1.55 2005/02/10 19:06:49 lestinsky Exp $
   *
   * Define German text-constants.
   *
   * This file is subject to the license as included in ../LICENSE
   * (c) 2005 Michael Lestinsky
   */

  /* Menu */
  $Lang['Insert']		= "Einf&uuml;gen";
  $Lang['Help']			= "Hilfe";
  $Lang['Info']			= "Infos";

  $Lang['Title']		= "Titel";
  $Lang['OrigTitle']		= "O-Titel";
  $Lang['Yield']		= "Portionen";
  $Lang['Cat'] 			= "Kategorien";
  $Lang['Ingred']		= "Zutaten";
  $Lang['Units']		= "Einheiten";
  $Lang['Preparation']		= "Zubereitung";
  $Lang['Text']			= "Text";
  $Lang['Description']		= "Beschreibung";
  $Lang['Alias']		= "Alias";
  $Lang['Recorder']             = 'Erfasser';
  $Lang['Date']			= 'Datum';
  $Lang['Source']		= 'Quelle';
  $Lang['Instructions']		= 'Anweisungen';
  $Lang['Rating']		= 'Bewertung';
  $Lang['Vote']['Submit']	= 'Rezept bewerten';
  $Lang['TotalRecipes']		= 'Verf&uuml;gbare Rezepte';
  $Lang['Contact']		= 'Kontakt';

  $Lang['FormApply']		= "Eintragen";
  $Lang['FormMoreIngr']		= "Weitere Zutatenliste";
  $Lang['FormReset']		= "Formular zur&uuml;cksetzen";

  $Lang['Delete']		= "L&ouml;schen";
  $Lang['NormalVers']		= "Normalansicht";
  $Lang['PrintVers']		= "Druckversion";
  $Lang['TypeMealMaster']	= 'MealMaster-Format';
  $Lang['TypeRezkonv']		= 'Rezkonv-Format';
  $Lang['Close']		= "Schlie&szlig;en";
  $Lang['Edit']                 = "Bearbeiten";
  $Lang['Next']                 = "N&auml;chstes";
  $Lang['Previous']             = "Vorheriges";
  $Lang['LastResult']		= 'Letztes Ergebnis';
  $Lang['Apply']		= '&Uuml;bernehmen';
  $Lang['Tag']['Do']		= 'Vormerken';
  $Lang['Tag']['All']		= 'Alle Vormerken';
  $Lang['Tag']['Show']['Do']	= 'Vorgemerkte Rezepte anzeigen';
  $Lang['Tag']['Show']['Title']= 'Vorgemerkte Rezepte';
  $Lang['Untag']['Do']		= 'Vormerkungen aufheben';
  $Lang['Untag']['All']	= 'Alle Vormerkungen aufheben';


  $Lang['Mainmenu']['Title']		= "Hauptmen&uuml;";
  $Lang['Mainmenu']['PlsChoose']	= "Bitte w&auml;hlen Sie im Hauptmen&uuml;";
  $Lang['Search']['Search']	= "Suchen";
  $Lang['Search']['For']	= "Suchen nach";
  $Lang['Search']['In']		= "Suchen in";
  $Lang['Search']['Go']		= "Suche Starten";
  $Lang['Search']['Result']	= "Suchergebnis";
  $Lang['Search']['Hits']       = "Treffer";

  $Lang['Search']['Menutitle']	= "Men&uuml;-Titel";
  $Lang['Search']['Categories']	= "Kategorie";
  $Lang['Search']['Ingredients']	= "Zutaten";
  $Lang['Search']['NoResult']	= "Kein Treffer.";

  $Lang['Recipe']['Edit']	= "Rezept bearbeiten";
  $Lang['Recipe']['Delete']	= 'Rezept l&ouml;schen';
  $Lang['Recipe']['Deleted']    = "Rezept gel&ouml;scht";
  $Lang['Recipe']['Insert']     = "Rezept in die Datenbank aufnehmen";
  $Lang['Recipe']['Inserted']   = "Rezept eingef&uuml;gt.";

  $Lang['Auth']['Login']	= 'Anmelden';
  $Lang['Auth']['LoggedInAs']   = "Angemeldet als";
  $Lang['Auth']['Logout']       = "Abmelden";
  $Lang['Auth']['NoLogin']      = "Nicht angemeldet";
  $Lang['Auth']['AccessDenied'] = 'Sie haben leider keinen Zugriff auf diese Funktion.';
  $Lang['Auth']['AccountLocked']	= 'Ihr Account wurde gesperrt.';

  $Lang['Admin']['Title']       = 'Administration';
  $Lang['Admin']['NewUser']['Title']	= 'Neuen Benutzer anlegen';
  $Lang['Admin']['NewUser']['Username']	= 'Benutzerkennung';
  $Lang['Admin']['NewUser']['Realname']	= 'Realer Name';
  $Lang['Admin']['NewUser']['EMail']	= 'EMail-Adresse';
  $Lang['Admin']['NewUser']['Usertype']	= 'Benutzerklasse';
  $Lang['Admin']['ErrMsg']['EmptyFields']	= 'Bitte alle Felder ausf&uuml;llen';
  $Lang['Admin']['ErrMsg']['InvalidMail']	= 'Die angegebene EMail-Adresse ist ung&uuml;ltig.';
  $Lang['Admin']['ErrMsg']['UserExists']	= 'Dieser Username existiert bereits';
  $Lang['Admin']['ErrMsg']['UserLocked']        = 'Dieser Benutzername ist bereits gesperrt.';
  $Lang['Admin']['ErrMsg']['UserDoesntExist']   = 'Dieser Benutzername ist ung&uuml;ltig/unbekannt.';
  $Lang['Admin']['UserClass']['Read']	= 'Nur Lesen';
  $Lang['Admin']['UserClass']['Write']	= 'Lesen und Schreiben';
  $Lang['Admin']['UserClass']['Moderate']	= 'Moderator';
  $Lang['Admin']['UserClass']['Admin']		= 'Administrator';
  $Lang['Admin']['LockAccount']['Title']	= 'Useraccount sperren';
  $Lang['Admin']['LockAccount']['Username']	= 'Benutzerkennung';
  $Lang['Admin']['LockAccount']['Lock']	= 'Sperren';

  $Lang['Settings']['Title']    = "Einstellungen";
  $Lang['Settings']['Password']['Title']        = "Passwort &auml;ndern";
  $Lang['Settings']['Password']['Old']          = "Altes Passwort";
  $Lang['Settings']['Password']['New']          = "Neues Passwort";
  $Lang['Settings']['Password']['Retype']       = "Neues Passwort best&auml;tigen";
  $Lang['Settings']['Password']['nomatch']      = "Passw&ouml;rter stimmen nicht &uuml;berein.";
  $Lang['Settings']['Password']['changed']      = "Passwort ge&auml;ndert.";

  $Lang['Pastebox']['Title']		= 'Pastebox';
  $Lang['Pastebox']['Text']		= <<<EOT
     Eingabefeld f&uuml;r einzelne vorformatierte Rezepte im Meal-Master- oder 
     RezKonv-Format.
EOT;

  $Lang['AllRecipes']		= "Alle Rezepte";
  $Lang['CatChoose']		= "Kategorie-Auswahl";

  $Lang['Aliases']['DefDescr']  = "Alias-Liste durch Leerzeichen getrennt angeben.";

  $Lang['Category']['Title']    = "Definierte Kategorien";
  $Lang['Category']['Help']     = <<<EOT
      Geben sie bis zu 5 Kategorien an. Klicken sie auf die gew&uuml;nschte
      Kategorie, um den Wert in das Formularfeld zu &uuml;bertragen.
EOT;
  $Lang['Category']['Edit']	= 'Kategorien bearbeiten';
  $Lang['Category']['EditAlias']= 'Aliase bearbeiten';
  $Lang['Category']['MakeAlias']= 'Umwandeln in Alias zu';
  $Lang['Category']['Delete']	= 'Kategorie l&ouml;schen';

  $Lang['UnitInfo']['Title']    = "Einheiten-Infos";
  $Lang['UnitInfo']['MMText']   = "Einheit im Meal-Master-Format.";
  $Lang['UnitInfo']['RKText']   = "Einheit im REZKONV-Format.";

  $Lang['Scale']['Title']	= 'Zahl der Portionen &auml;ndern';

  /* 
   * Infos: 
   */

  $Lang['Infos']['Title']        = "Informationen &uuml;ber die " . KOCHSUITE;

  $Lang['Homepage']['Title']	= 'Homepage';
  $Lang['Homepage']['Text'][0]	= <<<EOT
      <a href="http://koch-suite.berlios.de/">http://koch-suite.berlios.de/</a>:
      Aktuelle Informationen rund um dieses Projekt und die jeweils
      neusten Versionen der 
EOT;
  $Lang['Homepage']['Text'][0] .= " " . KOCHSUITE . " finden sich dort.\n";

  $Lang['Version']['Title']             = 'Version';
  $Lang['Version']['Text']['Pre']       = "Installiert ist " . KOCHSUITE;
  $Lang['Version']['Text']['Post']      = "";

  $Lang['Requirements']['Title']	= 'Voraussetzungen';
  $Lang['Requirements']['Text'][0]	= 'Vorausgesetzte Software:';

  $Lang['Requirements']['Software'][0]	= '<a href="http://www.mysql.org">MySQL</a> (3.23 getestet) oder <A HREF="http://www.postgresql.org/">PostgreSQL</A> (7.2.1 getestet),';
  $Lang['Requirements']['Software'][1]	= '<a href="http://www.php.net">PHP</a> (Version 4.1 oder h&ouml;her), mit MySQL- oder PostgreSQL-Unterst&uuml;tzung und einem aktuellen PEAR,';
  $Lang['Requirements']['Software'][2]	= 'ein Webserver, der von PHP unterst&uuml;tzt wird. (z.B. <a href="http://www.apache.org">Apache</a>)';

  $Lang['Requirements']['Text'][1]	= 'Getestete Betriebssysteme (alphabet. Reihenfolge):';

//  $Lang['Requirements']['OSes'][0]	= 'AIX 4.3';
  $Lang['Requirements']['OSes'][1]	= 'FreeBSD';
  $Lang['Requirements']['OSes'][2]	= 'Linux (Debian 2.2, 3.0)';
  $Lang['Requirements']['OSes'][3]	= 'OpenBSD';
  $Lang['Requirements']['OSes'][4]	= 'Solaris 2.[5-9]';

  $Lang['Requirements']['Text'][2]	= <<<EOT
      F&uuml;r die Kommandozeilen-Tools ist PHP mit MySQL-/PostgreSQL-
      Unterst&uuml;tzung als Standalone-Interpreter notwendig. 
      F&uuml;r das Web-Interface muss PHP als CGI oder als Apache-Modul 
      installiert sein.
EOT;

  $Lang['Language']['Title']	= "Spracheinstellung";
  $Lang['Language']['Text'][0]	= <<<EOT
      Seit Version 0.5 ist die Koch-Suite mehrsprachig. Um eine andere
      Sprache auszuw&auml;hlen, stellt man im Browser einfach die
      gew&uuml;nschte Sprache ein (z.B. Mozilla: Edit -> Preferences ->
      Navigator -> Languages). Wenn die gew&uuml;nschte Sprache existiert,
      werden die Seiten in dieser Sprache ausgegeben. Andernfalls wird auf
      die Standard-Sprache (Englisch "en") zur&uuml;ckgegriffen.
      Die Einstellungen k&ouml;nnen auch f&uuml;r die Zeitdauer einer Session
      durch Auswahl von <var>de</var>, <var>en</var>, <var>es</var> und
      <var>fr</var> aus dem Hauptmen&uuml; ver&auml;ndert werden.
      Nat&uuml;rlich werden Rezepte selbst nicht &uuml;bersetzt, sondern
      nur die Interfacesprache angepasst.
EOT;

  $Lang['License']['Title']	= "Lizenz";
  $Lang['License']['Pre'][0]	= "Das gesamte Paket der " . KOCHSUITE . 
      " steht unter folgender BSD-artigen Lizenz.";
  $Lang['License']['Post'][0]	= "";

  /* 
   * Help:
   */

  $Lang['Helptext']['General']	= <<<EOT
    <p class="top">
      Dieses Programmpaket besteht aus drei wesentlichen Komponenten:
      einer gro�en Bibliothek, die alle Konvertierungs- und
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

  $Lang['Helptext']['WWW']['Title']	= "Web-Frontend";
  $Lang['Helptext']['WWW']['part'][0]['Title']	= "Such-Interface";
  $Lang['Helptext']['WWW']['part'][0]['Text']	= <<<EOT
        Die Datenbank kann nach Stichw&ouml;rtern in
          <ul>
            <li>den Men&uuml;-Titeln</li>
            <li>den Kategorien der Rezepte</li>
            <li>der Zutatenliste</li>
          </ul>
        durchsucht werden. Es wird eine Liste an Rezepten zur Auswahl
        angezeigt, die den gew&uuml;nschten Suchbegriff beinhalten. Dazu
        gibt man im Suchinterface den Suchbegriff in das Formular ein, w&auml;hlt
        unter <i>Suchen in</i> das passende Suchfeld und klickt auf
        <i>Suche starten</i>. <br>
        Seit Version <i>0.5</i> ist auch die Verkn&uuml;pfung von mehreren
        Suchbegriffen durch <code>AND</code> m&ouml;glich.
        Damit l&auml;sst sich jetzt z.B. nach <code>Schoko AND Muffins</code>
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
  $Lang['Helptext']['WWW']['part'][2]['Title']	= "Hinweis zur Verwendung der Kategorien";
  $Lang['Helptext']['WWW']['part'][2]['Text']	= <<<EOT
	Rezepte k&ouml;nnen in verschiedene Kategorien eingeordnet werden.
	Nicht vorhandene Kategorien werden "on the fly" erzeugt, wenn zum
	ersten Mal ein Rezept in diese Kategorie eingetragen wird.
	Um die �bersichtlichkeit nicht zu verlieren, wird dabei folgendes
	Schema f�r die Auswahl der Kategorien beim Hinzuf�gen neuer
	Rezepte �ber das Webfrontend empfohlen:
	<ul>
	  <li>Als erste Kategorie sollte man w�hlen, um was f�r eine Speise es
	      sich handelt, also etwa "Suppe", "Snack" oder "Cocktail".</li>
	  <li>Als zweite Kategorie sollte, sofern bekannt, die Herkunft des
	      Rezeptes angegeben werden. Der Ordnung halber sollte man hier 
	      den Namen des Herkunftslandes angeben, also etwa 
	      <code>Italien</code>, <code>Frankreich</code> oder
	      <code>China</code>, anstatt der Adjektive 
	      <code>italienisch</code>...
EOT;
  

  $Lang['Helptext']['Feedback']['Title']	= "Feedback";
  $Lang['Helptext']['Feedback']['Text'][0]	= <<<EOT
      F&uuml;r die User und Entwickler existiert eine Mailingliste,
      <i>koch-suite-devel@lists.berlios.de</i>. Diese Mailingliste
      ist &ouml;ffentlich, es darf aber nur an diese Liste schreiben, wer
      sie auch aboniert (&quot;subscribe&quot;) hat (notwendig, um Spam zu
      verhindern). Details dazu stehen 
      <a href="http://lists.berlios.de/mailman/listinfo/koch-suite-devel">hier</a>.
EOT;

  $Lang['pattern']['Source_ingr'] = "/(Quelle|\bRef(erenz)?\b|Erfass(t|er))/i";
  $Lang['pattern']['Source']	= "(Quelle|Ref)";
  $Lang['pattern']['Recorder']	= "(Erfasst|Erfasser)";
  $Lang['pattern']['Date']	= "(Datum|Erfasst am)";

  $Lang['Locale']	= "de_DE.ISO8859-1";
?>
