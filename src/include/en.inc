<?
  /*
   * $Id: en.inc,v 1.36 2002/05/17 11:26:04 lestinsky Exp $
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

  $Lang['FormApply']		= "Apply";
  $Lang['FormMoreIngr']		= "Additional ingredient list";
  $Lang['FormReset']		= "Reset form";

  $Lang['Delete']		= "Delete";
  $Lang['NormalVers']		= "Normal view";
  $Lang['PrintVers']		= "Printable view";
  $Lang['Close']		= "Close";
  $Lang['Edit']                 = "Edit";
  $Lang['Next']			= "Next";
  $Lang['Previous']		= "Previous";
  $Lang['Apply']               = 'Apply';

  $Lang['Mainmenu']['Title']		= "Mainmenu";
  $Lang['Mainmenu']['PlsChoose']	= "Please choose from the main menu";
  $Lang['Search']['Search']	= "Search";
  $Lang['Search']['For']	= "Search for";
  $Lang['Search']['In']		= "Search in";
  $Lang['Search']['Go']		= "Start search";
  $Lang['Search']['Result']	= "Search result";
  $Lang['Search']['Hits']       = "Hits";

  $Lang['Search']['Menutitle']	= "Menutitle";
  $Lang['Search']['Categories']	= "Categories";
  $Lang['Search']['Ingredients']	= "Ingredients";
  $Lang['Search']['NoResult']	= "Result was empty.";

  $Lang['Recipe']['Edit']	= "Edit recipe";
  $Lang['Recipe']['Delete']	= "Delete recipe";
  $Lang['Recipe']['Deleted']    = "Recipe deleted";
  $Lang['Recipe']['Insert']     = "Insert recipe into the database";
  $Lang['Recipe']['Inserted']   = "Recipe inserted.";

  $Lang['Auth']['LoggedInAs']   = 'Logged in as';
  $Lang['Auth']['Logout']       = 'Logout';
  $Lang['Auth']['NoLogin']      = 'Not logged in';
  $Lang['Auth']['AccessDenied'] = 'Sorry, you do not have access to this function.';
  $Lang['Auth']['AccountLocked']	= 'Your account has been disabled.';

  $Lang['Admin']['Title']	= 'Administration';
  $Lang['Admin']['NewUser']['Title']    = 'Create a new user';
  $Lang['Admin']['NewUser']['Username'] = 'Username';
  $Lang['Admin']['NewUser']['Realname'] = 'Real name';
  $Lang['Admin']['NewUser']['EMail']    = 'EMail address';
  $Lang['Admin']['NewUser']['Usertype'] = 'Userclass';
  $Lang['Admin']['ErrMsg']['EmptyFields']       = 'Please fill out all fields';
  $Lang['Admin']['ErrMsg']['InvalidMail']       = 'The email address is invalid.';
  $Lang['Admin']['ErrMsg']['UserExists']        = 'This username does already exist.';
  $Lang['Admin']['ErrMsg']['UserLocked']	= 'The account is already locked.';
  $Lang['Admin']['ErrMsg']['UserDoesntExist']	= 'This username is invalid/unknown.';
  $Lang['Admin']['UserClass']['Read']	= 'Read Only';
  $Lang['Admin']['UserClass']['Write']	= 'Read/Write';
  $Lang['Admin']['UserClass']['Moderate']	= 'Moderator';
  $Lang['Admin']['UserClass']['Admin']	= 'Administrator';
  $Lang['Admin']['LockAccount']['Title']	= 'Lock An Account';
  $Lang['Admin']['LockAccount']['Username']	= 'Username';
  $Lang['Admin']['LockAccount']['Lock']	= 'Lock Account';

  $Lang['Settings']['Title']	= "Your Settings";
  $Lang['Settings']['Password']['Title']	= "Change your password";
  $Lang['Settings']['Password']['Old']		= "Old password";
  $Lang['Settings']['Password']['New']		= "New password";
  $Lang['Settings']['Password']['Retype']	= "Confirm new password";
  $Lang['Settings']['Password']['nomatch']	= "Passwords don't match.";
  $Lang['Settings']['Password']['changed']      = "Password changed.";

  $Lang['AllRecipes']		= "All recipes";
  $Lang['CatChoose']		= "Category-chooser";

  $Lang['Aliases']['DefDescr']  = "enter space separated alias list.";

  $Lang['Category']['Title']    = "Defined Categories";
  $Lang['Category']['Help']     = <<<EOT
      Please select 5 different categories max. Click onto the category
      to insert the value into the form.
EOT;

  $Lang['UnitInfo']['Title']    = "Unit Infomation";
  $Lang['UnitInfo']['MMText']   = "Units in Meal-Master format.";
  $Lang['UnitInfo']['RKText']   = "Units in REZKONV format.";

  $Lang['Scale']['Title']	= 'Change yield';


  /*
   * Infos:
   */

  $Lang['Infos']['Title']        = "Information about the " . KOCHSUITE;

  $Lang['Homepage']['Title']	= 'Homepage';
  $Lang['Homepage']['Text'][0]	= <<<EOT
      <a href="http://koch-suite.berlios.de/">http://koch-suite.berlios.de/</a>:
      Up-to-date information about this project and the currently newest
      releases of the 
EOT;
  $Lang['Homepage']['Text'][0] .= KOCHSUITE . " may be found here";

  $Lang['Version']['Title']             = 'Version';
  $Lang['Version']['Text']['Pre']       = "Installed is " . KOCHSUITE;
  $Lang['Version']['Text']['Post']      = "";

  $Lang['Requirements']['Title']	= 'Requirements';
  $Lang['Requirements']['Text'][0]	= 'Required Software:';

  $Lang['Requirements']['Software'][0]	= '<a href="http://www.mysql.org">MySQL</a> (3.23 tested) or <A HREF="http://www.postgresql.org/">PostgreSQL</A> (7.0.3 tested)';
  $Lang['Requirements']['Software'][1]	= '<a href="http://www.php.net">PHP</a> (Version >= 4.0.4), with MySQL- or PostgreSQL-support and a current PEAR,';
  $Lang['Requirements']['Software'][2]	= 'a Webserver which is supported by PHP (i.e. <a href="http://www.apache.org">Apache</a>)';

  $Lang['Requirements']['Text'][1]	= 'Tested Operating Systems (alphabetical Order):';

  $Lang['Requirements']['OSes'][0]	= 'AIX 4.3';
  $Lang['Requirements']['OSes'][1]	= 'FreeBSD 4.*';
  $Lang['Requirements']['OSes'][2]	= 'Linux (Debian 2.2)';
  $Lang['Requirements']['OSes'][3]	= 'OpenBSD 3.1';

  $Lang['Requirements']['Text'][2]	= <<<EOT
      You will need PHP compiled with MySQL/PostgreSQL support as standalone
      interpreter for the command line tools. For the web interface you need
      PHP installed as CGI or Apache module.
EOT;

  $Lang['License']['Title']	= "License";
  $Lang['License']['Pre'][0]	= "The entire " . KOCHSUITE . " package is released under the terms of the following BSD-style license.\n";
  $Lang['License']['Post'][0]	= "";


  /* 
   * Help:
   */

  $Lang['Helptext']['General']	= <<<EOT
    <p class="top">
      This program package consists of those three major parts: 
      a big library containing all the converting and output functions,
      (more or less as trivial wrappers to this library) a few 
      command-line tools and the webfrontend.
    <p>
EOT;

  $Lang['Language']['Title']	= "Language Setting";
  $Lang['Language']['Text'][0]	= <<<EOT
      The Koch-Suite is multilingual starting with release 0.5.
      To choose another lanuage, adjust your browser (i.e. Mozilla: Edit
      -> Preferences -> Navigator -> Languages).
      If the language you specified exists you will see all following
      pages in the requested language. Otherwise the default language
      (German "de") will be used.
      Of course this will not translate the recipes themselves. This selection
      affects the interface language only.
EOT;

  $Lang['Helptext']['CL']['Title']	= "Command-Line-Tools";
  $Lang['Helptext']['CL']['commands'][0]['Name'] = "mmimport";
  $Lang['Helptext']['CL']['commands'][0]['Text'] = <<<EOT
          Import recipes. The input will be expected from standard input
          (STDIN).
          The recipes will be extracted from surrounding text and may be
          in Meal-Master or 
          <a href="http://home.t-online.de/home/ufetzer/">REZKONV</a> format.
          See also <code>mmimport(1)</code>
EOT;
  $Lang['Helptext']['CL']['commands'][1]['Name'] = "rezept";
  $Lang['Helptext']['CL']['commands'][1]['Text'] = <<<EOT
          Search for recipes in the database and print them as
          LaTeX source, in Meal-Master format or as human readable text
          into a file or standard output.
          See <code>rezept(1)</code>.
EOT;

  $Lang['Helptext']['WWW']['Title']	= "Web-Frontend";
  $Lang['Helptext']['WWW']['part'][0]['Title']	= "Search-Interface";
  $Lang['Helptext']['WWW']['part'][0]['Text']	= <<<EOT
        You can search the database for terms in
          <ul>
            <li>the menu-titles</li>
            <li>the categories</li>
            <li>the ingredient list</li>
          </ul>
        The result is a list of all recipes containing the specified term
        in the chosen field.
        Choose "Search" from the main menu, enter the term into the form,
        choose from "Search in" where to search for that term and click 
        the "Start Search" button.
        Since version <i>0.5</i> you can combine several terms by "AND"
        (uppercase!). So we can finally search for 
        <code>Muffins AND Choc</code>
EOT;
  $Lang['Helptext']['WWW']['part'][1]['Title']  = "Recording and Editing Interface";
  $Lang['Helptext']['WWW']['part'][1]['Text']   = <<<EOT
        This interface allows you to edit saved recipes or record new
        ones. Numbers must use &raquo;<code>.</code>&laquo; (dot) as decimal seperator.
        Units should be valid 
        <a href="units.php" target="units" onclick="units();">Mealmaster,
        RezKonv units or defined aliases</a> and must be seperated by a space
        character from the quantity.
EOT;

  $Lang['Helptext']['Feedback']['Title']	= "Feedback";
  $Lang['Helptext']['Feedback']['Text'][0]	= <<<EOT
      We have a mailing list for users and developers,
      <i>koch-suite-devel@lists.berlios.de</i>. This mailing list is
      public, but only subscribed addresses are allowed to write there (to
      suppress spam). Please see 
      <a href="http://lists.berlios.de/mailman/listinfo/koch-suite-devel">this page</a> 
      for details.
EOT;

?>
