<?php
  /*
   * $Id: fr.inc,v 1.1 2005/01/02 02:37:23 lestinsky Exp $
   *
   * Define French text-constants.
   * Translation provided by Christian Schill <C.Schill@gmx.net>
   *
   * This file is subject to the license as included in ../LICENSE
   * (c) 2005 Michael Lestinsky
   */

  /* Menu */
  $Lang['Help']            = "Aide";
  $Lang['Info']            = "Infos";

  $Lang['Title']        = "Titre";
  $Lang['Yield']        = "Portions";
  $Lang['Cat']             = "Catégories";
  $Lang['Ingred']        = "Ingrédients";
  $Lang['Units']        = "Unitées";
  $Lang['Preparation']        = "Préparation";
  $Lang['Text']            = "Text";
  $Lang['Description']        = "Description";
  $Lang['Date']            = 'Date';
  $Lang['Source']        = 'Source';
  $Lang['Instructions']        = 'Instructions';
  $Lang['Rating']        = 'Evaluations';
  $Lang['Vote']['Submit']    = 'Evaluer recette';
  $Lang['Contact']        = 'Contact';

  $Lang['FormApply']        = "Inscrire";
  $Lang['FormMoreIngr']        = "liste d'ingrédients supplémentaires";  

  $Lang['Edit']                 = "Modifier";
  $Lang['Previous']             = "Précédent";
  $Lang['LastResult']        = 'Dernier résultat';

  $Lang['Search']['Search']    = "Chercher";
  $Lang['Search']['Go']        = "Commencer recherche";
  $Lang['Search']['Result']    = "Résultat de recherche";
  $Lang['Search']['Hits']       = "Résultats";

  $Lang['Search']['Categories']    = "Catégorie";
  $Lang['Search']['Ingredients']    = "Ingrédients";
  $Lang['Search']['NoResult']    = "Pas de résultat.";

  $Lang['Recipe']['Edit']	= "Modifier recette";
  $Lang['Recipe']['Insert']     = "Intégrer recette dans banc de données";

  $Lang['Auth']['AccessDenied']	= "Vous n'avez pas d'acces à cette fonction, désolé.";
  $Lang['Auth']['AccountLocked']= 'Votre compte a été bloqué.';

  $Lang['Admin']['Title']       = 'Administration';
  $Lang['Admin']['NewUser']['Title']	= 'Créer nouveau utilisateur';
  $Lang['Admin']['NewUser']['Username']	= "Identifiant d'utilisateur";
  $Lang['Admin']['NewUser']['EMail']    = 'adresse courriel';
  $Lang['Admin']['NewUser']['Usertype']	= "Classe d'utilisateur";
  $Lang['Admin']['ErrMsg']['UserExists']= "Ce nom d'utilisateur existe déjà";
  $Lang['Admin']['ErrMsg']['UserLocked']= "Ce nom d'utilisateur est déjà bloqué.";
  $Lang['Admin']['UserClass']['Read']	= "Lire uniquement";
  $Lang['Admin']['UserClass']['Moderate']	= 'Moderateur';
  $Lang['Admin']['UserClass']['Admin']	= 'Administrateur';
  $Lang['Admin']['LockAccount']['Title']= "Bloquer compte d'utilisateur";
  $Lang['Admin']['LockAccount']['Username']	= "Identifiant d'utilisateur";
  $Lang['Admin']['LockAccount']['Lock']	= 'Bloquer';

  $Lang['AllRecipes']		= "Toutes les recettes";
  $Lang['CatChoose']		= "Choix de catégorie";

  $Lang['Category']['Title']    = "Catégories definies";
  $Lang['Category']['Edit']	= 'Modifier catégories';

  $Lang['UnitInfo']['Title']    = "Informations sûr les unitées";
  $Lang['UnitInfo']['MMText']   = "Unité format Meal-Master.";
  $Lang['UnitInfo']['RKText']   = "Unité format REZKONV-Format.";

  /* 
   * Infos: 
   */

  $Lang['Version']['Title']             = 'Version';
  $Lang['Version']['Text']['Pre']       = "Installé: " . KOCHSUITE;
  $Lang['Version']['Text']['Post']      = "";

  $Lang['Requirements']['Title']	= 'Conditions';
  $Lang['Requirements']['Text'][0]	= 'Logitiel nécessaire:';

  $Lang['Requirements']['Text'][1]	= "Systèmes d'exploitation testés (ordne alphabetique):";

  $Lang['Requirements']['OSes'][1]    = 'FreeBSD';
  $Lang['Requirements']['OSes'][2]    = 'Linux (Debian 2.2, 3.0)';
  $Lang['Requirements']['OSes'][3]    = 'OpenBSD';
  $Lang['Requirements']['OSes'][4]    = 'Solaris 2.[5-9]';

  /* 
   * Help:
   */

  $Lang['Locale']    = "fr_FR.ISO8859-1";
?>
