<?php
  /*
   * $Id: fr.inc,v 1.3 2005/04/02 08:36:51 bus Exp $
   *
   * Define French text-constants.
   * Translation provided by Christian Schill <C.Schill@gmx.net>
   *   and Philippe Bégou
   *
   * This file is subject to the license as included in ../LICENSE
   * (c) 2005 Michael Lestinsky
   */

  /* Menu */
  $Lang['Insert']		= "Nouvelle recette";
  $Lang['Help']			= "Aide";
  $Lang['Info']			= "Info";

  $Lang['Title']		= "Titre";
  $Lang['OrigTitle']		= "O-titre";
  $Lang['Yield']		= "Nombre de couverts";
  $Lang['Cat'] 			= "Cat&eacute;gories";
  $Lang['Ingred']		= "Ingr&eacute;dients";
  $Lang['Units']		= "Unit&eacute;s";
  $Lang['Preparation']		= "Instructions";
  $Lang['Text']			= "Texte";
  $Lang['Description']		= "Description";
  $Lang['Alias']		= "Alias";
  $Lang['Recorder']		= 'Enregistr&eacute; par';
  $Lang['Date']			= 'Date';
  $Lang['Source']		= 'Origine';
  $Lang['Instructions']		= 'Instructions';
  $Lang['Rating']		= '&Eacute;valuation';
  $Lang['Vote']['Submit']	= 'Evaluer cette recette';
  $Lang['Contact']		= 'Contact';
  $Lang['TotalRecipes']		= 'Nombre total de recettes';

  $Lang['FormApply']		= "Valider";
  $Lang['FormMoreIngr']		= "Ingr&eacute;dients suppl&eacute;mentaires";
  $Lang['FormReset']		= "Effacer le formulaire";

  $Lang['Delete']		= "Supprimer";
  $Lang['NormalVers']		= "Vue normale";
  $Lang['PrintVers']		= "Vue imprimable";
  $Lang['TypeMealMaster']       = 'MealMaster';
  $Lang['TypeRezkonv']          = 'Rezkonv';
  $Lang['Close']		= "Fermer";
  $Lang['Edit']                 = "&Eacute;diter";
  $Lang['Next']			= "Suivant";
  $Lang['Previous']		= "Pr&eacute;c&eacute;dent";
  $Lang['LastResult']		= 'Retour liste des r&eacute;sultats';
  $Lang['Apply']		= 'Valider';
  $Lang['Tag']['Do']		= 'S&eacute;lectionner';
  $Lang['Tag']['All']		= 'S&eacute;lectionner tout';
  $Lang['Tag']['Show']['Do']	= 'Liste des recettes s&eacute;lectionn&eacute;es';
  $Lang['Tag']['Show']['Title']	= 'Recettes s&eacute;lectionn&eacute;es';
  $Lang['Untag']['Do']		= 'D&eacute;s&eacute;lectionner les recettes coch&eacute;es';
  $Lang['Untag']['All']		= 'Tout d&eacute;s&eacute;lectionner';

  $Lang['Mainmenu']['Title']	= "Menu principal";
  $Lang['Mainmenu']['PlsChoose']= "Faites votre choix dans le menu principal";
  $Lang['Search']['Search']	= "Rechercher";
  $Lang['Search']['For']	= "ce texte";
  $Lang['Search']['In']		= "dans";
  $Lang['Search']['Go']		= "Lancer la recherche";
  $Lang['Search']['Result']	= "R&eacute;sultats de la recherche";
  $Lang['Search']['Hits']       = "recette(s) trouv&eacute;e(s)";

  $Lang['Search']['Menutitle']	= "Titre";
  $Lang['Search']['Categories']	= "Cat&eacute;gorie";
  $Lang['Search']['Ingredients']= "Ingr&eacute;dients";
  $Lang['Search']['NoResult']	= "Aucune recette";

  $Lang['Recipe']['Edit']	= "&Eacute;diter la recette";
  $Lang['Recipe']['Delete']	= "Supprimer la recette";
  $Lang['Recipe']['Deleted']    = "Recette supprim&eacute;e";
  $Lang['Recipe']['Insert']     = "&Eacute;diter la recette";
  $Lang['Recipe']['Inserted']   = "Recette mise &agrave; jour.";

  $Lang['Auth']['Login']	= 'Se connecter';
  $Lang['Auth']['LoggedInAs']   = 'Connect&eacute; en tant que';
  $Lang['Auth']['Logout']       = 'Se d&eacute;connecter';
  $Lang['Auth']['NoLogin']      = 'Non connect&eacute;';
  $Lang['Auth']['AccessDenied'] = "D&eacute;sol&eacute;, vous n'avez pas acc&egrave; &agrave; cette fonction.";
  $Lang['Auth']['AccountLocked']= 'Votre compte a &eacute;t&eacute; d&eacute;sactiv&eacute;.';

  $Lang['Admin']['Title']	= 'Administrer';
  $Lang['Admin']['NewUser']['Title']    = 'Cr&eacute;er un nouvel utilisateur';
  $Lang['Admin']['NewUser']['Username'] = "Identifiant";
  $Lang['Admin']['NewUser']['Realname'] = 'Nom complet';
  $Lang['Admin']['NewUser']['EMail']    = 'Addresse &eacute;lectronique';
  $Lang['Admin']['NewUser']['Usertype'] = "Droits";
  $Lang['Admin']['ErrMsg']['EmptyFields']       = 'Tous les champs doivent &ecirc;tre remplis.';
  $Lang['Admin']['ErrMsg']['InvalidMail']       = "L'adresse &eacute;lectronique est invalide.";
  $Lang['Admin']['ErrMsg']['UserExists']        = "Cet utilisateur existe d&eacute;j&agrave;.";
  $Lang['Admin']['ErrMsg']['UserLocked']	= 'Ce compte est d&eacute;j&agrave; bloqu&eacute;.';
  $Lang['Admin']['ErrMsg']['UserDoesntExist']	= "Cet utilisateur est inconnu.";
  $Lang['Admin']['UserClass']['Read']	= 'Lecture';
  $Lang['Admin']['UserClass']['Write']	= 'Lecture/&eacute;criture';
  $Lang['Admin']['UserClass']['Moderate']	= 'Mod&eacute;rateur';
  $Lang['Admin']['UserClass']['Admin']	= 'Administrateur';
  $Lang['Admin']['LockAccount']['Title']	= 'Bloquer un compte utilisateur';
  $Lang['Admin']['LockAccount']['Username']	= 'Identifiant';
  $Lang['Admin']['LockAccount']['Lock']	= 'Bloquer';

  $Lang['Settings']['Title']	= "Param&egrave;tres";
  $Lang['Settings']['Password']['Title']	= "Changer le mot de passe";
  $Lang['Settings']['Password']['Old']		= "Ancien mot de passe";
  $Lang['Settings']['Password']['New']		= "Nouveau mot de passe";
  $Lang['Settings']['Password']['Retype']	= "Confirmer le mot de passe";
  $Lang['Settings']['Password']['nomatch']	= "Les mots de passe ne sont pas identiques.";
  $Lang['Settings']['Password']['changed']      = "Mot de passe chang&eacute;.";

  $Lang['Pastebox']['Title']            = "Bo&icirc;te d'import";
  $Lang['Pastebox']['Text']             = <<<EOT
     Coller ci-dessous une recette au format Meal-Master ou RezKonv.
EOT;

  $Lang['AllRecipes']		= "Toutes les recettes";
  $Lang['CatChoose']		= "Choix de la cat&eacute;gorie";

  $Lang['Aliases']['DefDescr']  = "Entrer une liste d'alias s&eacute;par&eacute;s par des espaces.";

  $Lang['Category']['Title']    = "Cat&eacute;gories d&eacute;finies";
  $Lang['Category']['Help']     = <<<EOT
      Choisir 5 cat&eacute;gories maximum diff&eacute;rentes. Cliquer sur la cat&eacute;gorie pour l'ins&eacute;rer dans le formulaire.
EOT;
  $Lang['Category']['Edit']     = '&Eacute;diter la cat&eacute;gorie';
  $Lang['Category']['EditAlias']= '&Eacute;diter les alias';
  $Lang['Category']['MakeAlias']= 'Convertir en alias pour';
  $Lang['Category']['Delete']   = 'Supprimer la cat&eacute;gorie';


  $Lang['UnitInfo']['Title']    = "Information sur les unit&eacute;s";
  $Lang['UnitInfo']['MMText']   = "Unit&eacute;s en format Meal-Master.";
  $Lang['UnitInfo']['RKText']   = "Unit&eacute;s en format REZKONV.";

  $Lang['Scale']['Title']	= 'Changer le nombre de couverts';


  /*
   * Infos:
   */

  $Lang['Infos']['Title']        = "&Agrave; propos de " . KOCHSUITE;

  $Lang['Homepage']['Title']	= 'Accueil';
  $Lang['Homepage']['Text'][0]	= <<<EOT
      <a href="http://koch-suite.berlios.de/">http://koch-suite.berlios.de/</a>:
      Les informations r&eacute;centes sur le projet et les derni&egrave;res versions de 
EOT;
  $Lang['Homepage']['Text'][0] .= KOCHSUITE . " peuvent y &ecirc;tre trouv&eacute;es.";

  $Lang['Version']['Title']             = 'Version';
  $Lang['Version']['Text']['Pre']       = "La version install&eacute;e est " . KOCHSUITE;
  $Lang['Version']['Text']['Post']      = "";

  $Lang['Requirements']['Title']	= 'Pr&eacute;requis';
  $Lang['Requirements']['Text'][0]	= 'Logiciels:';

  $Lang['Requirements']['Software'][0]	= '<a href="http://www.mysql.org">MySQL</a> (3.23 test&eacute;) ou <A HREF="http://www.postgresql.org/">PostgreSQL</A> (7.2.1 test&eacute;)';
  $Lang['Requirements']['Software'][1]	= '<a href="http://www.php.net">PHP</a> (Version 4.1 ou post&eacute;rieure), avec support MySQL ou PostgreSQL et une version courante de PEAR';
  $Lang['Requirements']['Software'][2]	= 'un serveur Web support&eacute; par PHP (par exemple <a href="http://www.apache.org">Apache</a>)';

  $Lang['Requirements']['Text'][1]	= "Syst&egrave;mes d'exploitation test&eacute;s (ordre alphab&eacute;tique):";

//  $Lang['Requirements']['OSes'][0]	= 'AIX 4.3';
  $Lang['Requirements']['OSes'][1]	= 'FreeBSD';
  $Lang['Requirements']['OSes'][2]	= 'Linux (Debian 2.2, 3.0)';
  $Lang['Requirements']['OSes'][3]	= 'OpenBSD';
  $Lang['Requirements']['OSes'][4]	= 'Solaris 2.[5-9]';

  $Lang['Requirements']['Text'][2]	= <<<EOT
      Les utilitaires de la ligne de commande ont besoin de PHP compil&eacute;
      comme interpr&eacute;teur ind&eacute;pendant, avec le support MySQL/PostgreSQL.
      L'interface Web a besoin de PHP install&eacute; comme module CGI ou Apache.
EOT;

  $Lang['License']['Title']	= "Licence";
  $Lang['License']['Pre'][0]	= "Tout le logiciel " . KOCHSUITE . " est distribu&eacute; selon les termes de la licence, de type BSD, suivante.\n";
  $Lang['License']['Post'][0]	= "";


  /* 
   * Help:
   */

  $Lang['Helptext']['General']	= <<<EOT
    <p class="top">
      Ce logiciel comprend trois parties principales:
      une grosse biblioth&egrave;que de fonctions, quelques utilitaires
      en ligne de commande (qui encapsulent de fa&ccedil;on plus ou moins  
      triviale les fonctions de cette biblioth&egrave;que) et l'interface web.
    <p>
EOT;

  $Lang['Language']['Title']	= "Choix de la langue";
  $Lang['Language']['Text'][0]	= <<<EOT
      Koch-Suite est multilangue depuis la version 0.5.
      Le choix de la langue s'effectue dans le navigateur (par exemple
      pour Firefox: &Eacute;dition -> Pr&eacute;f&eacute;rences -> Langues).
      Si la langue choisie existe, vous verrez toutes les pages suivantes
      s'afficher dans la langue demand&eacute;e. Sinon la langue par d&eacute;faut
      (anglais "en") sera utilis&eacute;e. Vous pouvez changer de langue
      en cours de session en choisissant <var>de</var>, <var>en</var>,
      <var>es</var> ou <var>fr</var> depuis le menu principal.
      Bien s&ucirc;r cela ne changera pas la langue dans laquelle les recettes
      sont r&eacute;dig&eacute;es, uniquement la langue de l'interface utilisateur.
EOT;

  $Lang['Helptext']['CL']['Title']	= "Utilitaires en ligne de commande";
  $Lang['Helptext']['CL']['commands'][0]['Name'] = "mmimport";
  $Lang['Helptext']['CL']['commands'][0]['Text'] = <<<EOT
          Importe des recettes. Lit les recettes sur l'entr&eacute;e
          standard (STDIN).
          Les recettes sont extraites du texte englobant et peuvent &ecirc;tre
          en format Meal-Master ou 
          <a href="http://home.t-online.de/home/ufetzer/index.html">REZKONV</a>.
          Voir aussi <code>mmimport(1)</code>
EOT;
  $Lang['Helptext']['CL']['commands'][1]['Name'] = "rezept";
  $Lang['Helptext']['CL']['commands'][1]['Text'] = <<<EOT
          Recherche des recettes dans la base et les &eacute;crit
          en format LaTeX, Meal-Master ou texte
          dans un fichier ou sur la sortie standard.
          Voir <code>rezept(1)</code>.
EOT;

  $Lang['Helptext']['WWW']['Title']	= "Interface Web";
  $Lang['Helptext']['WWW']['part'][0]['Title']	= "Recherche";
  $Lang['Helptext']['WWW']['part'][0]['Text']	= <<<EOT
        Ce choix dans le menu vous permet de rechercher les recettes
        contenant certains termes. La recherche peut se faire sur:
          <ul>
            <li>le titre de la recette</li>
            <li>les cat&eacute;gories</li>
            <li>la liste d'ingr&eacute;dients.</li>
          </ul>
        Le r&eacute;sultat de la recherche est pr&eacute;sent&eacute; sous
        forme d'une liste de toutes les recettes satisfaisant les crit&egrave;res.
        Choisir "Rechercher" dans le menu principal, entrer le terme
        dans le formulaire et cliquer sur le bouton "Lancer la recherche".
        Depuis la version <i>0.5</i> vous pouvez combiner plusieurs termes avec 
        "AND" (en majuscules!), par exemple
        <code>amandes AND chocolat</code>.
EOT;
  $Lang['Helptext']['WWW']['part'][1]['Title']  = "Nouvelle recette";
  $Lang['Helptext']['WWW']['part'][1]['Text']   = <<<EOT
        Ce choix dans le menu vous permet d'&eacute;diter de nouvelles recettes.
        Les quantit&eacute;s doivent utiliser le point (&quot;<code>.</code>&quot; )
        comme s&eacute;parateur d&eacute;cimal. Les unit&eacute;s doivent &ecirc;tre
        des <a href="units.php" target="units" onclick="units();">unit&eacute;s
        Mealmaster ou RezKonv ou des alias</a> valides et doivent
        &ecirc;tre s&eacute;par&eacute;es de la quantit&eacute; par un espace.
EOT;

  $Lang['Helptext']['WWW']['part'][2]['Title']  = "Conseils pour l'utilisation des cat&eacute;gories";
  $Lang['Helptext']['WWW']['part'][2]['Text']   = <<<EOT
        Les recettes peuvent &ecirc;tre class&eacute;es par cat&eacute;gories.
	Le nombre de cat&eacute;gories n'est pas limit&eacute;, cependant
        la sp&eacute;cification du format mealmaster ne permet pas plus de
	5 cat&eacute;gories.
	Une nouvelle cat&eacute;gorie est cr&eacute;&eacute;e automatiquement,
	d&egrave;s qu'une recette l'utilise pour la premi&egrave;re fois.
        Pour bien g&eacute;rer les cat&eacute;gories, il est recommand&eacute;
        de proc&eacute;der ainsi, lors de la cr&eacute;ation de nouvelles recettes
	au moyen de l'interface web:
	<ul>
	  <li>La premi&egrave;re cat&eacute;gorie d&eacute;crira le type de plat
	      par exemple "soupe", "dessert" ou "poisson".</li>
	  <li>La seconde cat&eacute;gorie d&eacute;crira l'origine de la recette.
	      Utiliser le nom du pays d'origine, par exemple 
	      <code>Italie</code>, <code>France</code> ou <code>Chine</code>.
	      Ne pas utiliser d'adjectif tel que <code>italien</code>, 
	      <code>fran&ccedil;ais</code> ou <code>chinois</code>.</li>
	</ul> 
EOT;


  $Lang['Helptext']['Feedback']['Title']	= "Votre avis";
  $Lang['Helptext']['Feedback']['Text'][0]	= <<<EOT
      Il existe une liste de diffusion pour les utilisateurs et d&eacute;veloppeurs,
      <i>koch-suite-devel@lists.berlios.de</i>. Cette liste est publique,
      mais seules les personnes inscrites peuvent y poster un message
      (pour se prot&eacute;ger des pourriels). Voir 
      <a href="http://lists.berlios.de/mailman/listinfo/koch-suite-devel">cette page</a> 
      pour plus de d&eacute;tails.
EOT;

  $Lang['pattern']['Source_ingr']	= "/(Source|Reference)/i";
  $Lang['pattern']['Source']    = "(Source|Reference)";
  $Lang['pattern']['Recorder']  = "(Recorded by)";
  $Lang['pattern']['Date']      = "(Date|Recorded on)";

  $Lang['Locale']	= "fr_FR.ISO8859-1";
?>
