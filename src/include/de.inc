<?
  /*
   * $Id: de.inc,v 1.1 2001/05/16 00:21:26 michael Exp $
   *
   * Define German text-constanst.
   *
   * This file is subject to the license as included in ../LICENSE
   * (c) 2001 Michael Lestinsky
   */

  /* Menu */
  $Lang['Insert']       = "Einf&uuml;gen";
  $Lang['Help']         = "Hilfe";
  $Lang['Info']         = "Infos";

  $Lang['Title']        = "Titel";
  $Lang['Yield']        = "Portionen";
  $Lang['Cat'] 		= "Kategorien";
  $Lang['Ingred']	= "Zutaten";
  $Lang['Units']        = "Einheiten";
  $Lang['Preparation']  = "Zubereitung";
  $Lang['Text']         = "Text";
  $Lang['Description']  = "Beschreibung";
  $Lang['Alias']        = "Alias";
  $Lang['UnitInfo']	= "Einheiten-Infos";

  $Lang['FormApply']    = "Eintragen";
  $Lang['FormMoreIngr'] = "Weitere Zutatenliste";
  $Lang['FormReset']    = "Formular zur&uuml;cksetzen";

  $Lang['Delete']	= "L&ouml;schen";
  $Lang['PrintVers']   = "Druckversion";
  $Lang['Close']        = "Schlie&szlig;en";

  $Lang['Mainmenu']['Title']     = "Hauptmen&uuml;";
  $Lang['Mainmenu']['PlsChoose'] = "Bitte W&auml;hlen Sie im Hauptmen&uuml;";
  $Lang['Search']['Search'] = "Suchen";
  $Lang['Search']['For']    = "Suchen nach";
  $Lang['Search']['In']     = "Suchen in";
  $Lang['Search']['Go']     = "Suche Starten";
  $Lang['Search']['Result'] = "Suchergebnis";

  $Lang['Search']['Menutitle']   = "Men&uuml;-Titel";
  $Lang['Search']['Categories']  = "Kategorie";
  $Lang['Search']['Ingredients'] = "Zutaten";
  $Lang['Search']['NoResult']    = "Kein Treffer.";

  $Lang['Recipe']['Edit']        = "Rezept bearbeiten";
  $Lang['Recipe']['Delete']      = 'Rezept l&ouml;schen';

  $Lang['AllRecipes']   = "Alle Rezepte";
  $Lang['CatChoose']    = "Kategorie-Auswahl";

  $Lang['Homepage']	= <<<EOT
    <h3>Homepage</h3>
    <p>
      <a href="http://milliways.ma.choin.net/~michael/koch-suite/">http://milliways.ma.choin.net/~michael/koch-suite/</a>:
      Aktuelle Informationen rund um dieses Projekt und die jeweils
      neusten Versionen der <i>Koch-Suite</i> finden sich dort.
    </p>
EOT;

  $Lang['Reqirements']	= <<<EOT
    <h3>Voraussetzungen:</h3>
    <p>
      Vorausgesetzte Software:
    </p>
    <ol>
      <li><a href="http://www.mysql.org">MySQL</a> (3.22 und 3.23
          getestet),</li>
      <li><a href="http://www.php.net">PHP</a> (Version 4), mit
          MySQL-Unterstützung,</li>
      <li>ein Webserver, der PHP unterstützt. (z.B. <a
          href="http://www.apache.org">Apache</a>)</li>
    </ol>

    <p>
      Getestete Betriebssysteme (alphabet. Reihenfolge):
    </p>
    <ul>
      <li>FreeBSD 4.2</li>
      <li>Linux (Debian 2.2)</li>
      <li>OpenBSD 2.8</li>
    </ul>
    <p>
      Für die Kommandozeilen-Tools ist PHP mit MySQL-Unterstützung als
      Standalone-Interpreter notwendig. Für das Web-Interface muss PHP als
      CGI oder als Apache-Modul installiert sein.
    </p>
EOT;

  $Lang['Language']	= <<<EOT
    <h3>Spracheinstellung:</h3>
    <p>
      Seit Version 0.5 ist die Koch-Suite mehrsprachig. Um eine andere
      Sprache auszuw&auml;hlen, stellt man im Browser einfach die
      gew&uuml;nschte Sprache ein (z.B. Mozilla: Edit -> Preferences ->
      Navigator -> Languages). Wenn die gew&uuml;nschte Sprache existiert,
      werden die Seiten in dieser Sprache ausgegeben. Andernfalls wird auf
      die Standard-Sprache (Deutsch) zur&uuml;ckgegriffen.
    </p>
EOT;

  $Lang['License1']	= <<<EOT
    <h3>Lizenz:</h3>
    <p>
      Das gesamte Paket der Koch-Suite steht unter einer BSD-artigen
      Lizenz:
    </p>
EOT;

  $Lang['License2']	= <<<EOT
    </p>
EOT;

  $Lang['Helptext']	= <<<EOT
    <h2>Hilfe:</h2>
    <p class="top">
      Dieses Programmpaket besteht aus drei wesentlichen Komponenten:
      einer großen Bibliothek, die alle Konvertierungs- und
      Ausgabe-Funktionen bereitstellt, (mehr oder weniger als triviale
      Wrapper um die Bibliothek) den Kommandozeilen-Tools und dem
      Web-Frontend.
    <p>
EOT;

  $Lang['CLHelp']	= <<<EOT
    <h3>Kommandozeilen-Tools</h3>
    <dl>
      <dt><code>mmimport</code></dt>
          <dd><i>Import von Rezepten.</i> Der Input wird auf dem
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

  $Lang['WWWHelp']	= <<<EOT
    <h3>Web-Frontend</h3>
    <dl>
      <dt>Such-Interface:</dt>
        <dd>Die Datenbank kann nach Stichwörtern in
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

  $Lang['Feedback']	= <<<EOT
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
