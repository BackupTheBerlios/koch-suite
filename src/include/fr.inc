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
  $Lang['Cat']             = "Cat�gories";
  $Lang['Ingred']        = "Ingr�dients";
  $Lang['Units']        = "Unit�es";
  $Lang['Preparation']        = "Pr�paration";
  $Lang['Text']            = "Text";
  $Lang['Description']        = "Description";
  $Lang['Date']            = 'Date';
  $Lang['Source']        = 'Source';
  $Lang['Instructions']        = 'Instructions';
  $Lang['Rating']        = 'Evaluations';
  $Lang['Vote']['Submit']    = 'Evaluer recette';
  $Lang['Contact']        = 'Contact';

  $Lang['FormApply']        = "Inscrire";
  $Lang['FormMoreIngr']        = "liste d'ingr�dients suppl�mentaires";  

  $Lang['Edit']                 = "Modifier";
  $Lang['Previous']             = "Pr�c�dent";
  $Lang['LastResult']        = 'Dernier r�sultat';

  $Lang['Search']['Search']    = "Chercher";
  $Lang['Search']['Go']        = "Commencer recherche";
  $Lang['Search']['Result']    = "R�sultat de recherche";
  $Lang['Search']['Hits']       = "R�sultats";

  $Lang['Search']['Categories']    = "Cat�gorie";
  $Lang['Search']['Ingredients']    = "Ingr�dients";
  $Lang['Search']['NoResult']    = "Pas de r�sultat.";

  $Lang['Recipe']['Edit']	= "Modifier recette";
  $Lang['Recipe']['Insert']     = "Int�grer recette dans banc de donn�es";

  $Lang['Auth']['AccessDenied']	= "Vous n'avez pas d'acces � cette fonction, d�sol�.";
  $Lang['Auth']['AccountLocked']= 'Votre compte a �t� bloqu�.';

  $Lang['Admin']['Title']       = 'Administration';
  $Lang['Admin']['NewUser']['Title']	= 'Cr�er nouveau utilisateur';
  $Lang['Admin']['NewUser']['Username']	= "Identifiant d'utilisateur";
  $Lang['Admin']['NewUser']['EMail']    = 'adresse courriel';
  $Lang['Admin']['NewUser']['Usertype']	= "Classe d'utilisateur";
  $Lang['Admin']['ErrMsg']['UserExists']= "Ce nom d'utilisateur existe d�j�";
  $Lang['Admin']['ErrMsg']['UserLocked']= "Ce nom d'utilisateur est d�j� bloqu�.";
  $Lang['Admin']['UserClass']['Read']	= "Lire uniquement";
  $Lang['Admin']['UserClass']['Moderate']	= 'Moderateur';
  $Lang['Admin']['UserClass']['Admin']	= 'Administrateur';
  $Lang['Admin']['LockAccount']['Title']= "Bloquer compte d'utilisateur";
  $Lang['Admin']['LockAccount']['Username']	= "Identifiant d'utilisateur";
  $Lang['Admin']['LockAccount']['Lock']	= 'Bloquer';

  $Lang['AllRecipes']		= "Toutes les recettes";
  $Lang['CatChoose']		= "Choix de cat�gorie";

  $Lang['Category']['Title']    = "Cat�gories definies";
  $Lang['Category']['Edit']	= 'Modifier cat�gories';

  $Lang['UnitInfo']['Title']    = "Informations s�r les unit�es";
  $Lang['UnitInfo']['MMText']   = "Unit� format Meal-Master.";
  $Lang['UnitInfo']['RKText']   = "Unit� format REZKONV-Format.";

  /* 
   * Infos: 
   */

  $Lang['Version']['Title']             = 'Version';
  $Lang['Version']['Text']['Pre']       = "Install�: " . KOCHSUITE;
  $Lang['Version']['Text']['Post']      = "";

  $Lang['Requirements']['Title']	= 'Conditions';
  $Lang['Requirements']['Text'][0]	= 'Logitiel n�cessaire:';

  $Lang['Requirements']['Text'][1]	= "Syst�mes d'exploitation test�s (ordne alphabetique):";

  $Lang['Requirements']['OSes'][1]    = 'FreeBSD';
  $Lang['Requirements']['OSes'][2]    = 'Linux (Debian 2.2, 3.0)';
  $Lang['Requirements']['OSes'][3]    = 'OpenBSD';
  $Lang['Requirements']['OSes'][4]    = 'Solaris 2.[5-9]';

  /* 
   * Help:
   */

  $Lang['Locale']    = "fr_FR.ISO8859-1";
?>