<?
  /*
   * $Id: es.inc,v 1.3 2002/05/17 11:26:04 lestinsky Exp $
   *
   * Define Spanish text-constants.
   *
   * This file is subject to the license as included in ../LICENSE
   * (c) 2001 Michael Lestinsky
   *
   * Spanish language file by Rodolfo González <rodolfo_gonzalez@hotmail.com>
   *
   */

  /* Menu */
  $Lang['Insert']		= "Insertar";
  $Lang['Help']			= "Ayuda";
  $Lang['Info']			= "Informaci&oacute;n";

  $Lang['Title']		= "T&iacute;tulo";
  $Lang['Yield']		= "Porciones";
  $Lang['Cat'] 			= "Categor&iacute;as";
  $Lang['Ingred']		= "Ingredientes";
  $Lang['Units']		= "Unidades";
  $Lang['Preparation']		= "Preparaci&oacute;n";
  $Lang['Text']			= "Texto";
  $Lang['Description']		= "Descripci&oacute;n";
  $Lang['Alias']		= "Alias";

  $Lang['FormApply']		= "Solicitar";
  $Lang['FormMoreIngr']		= "Ingredientes adicionales";
  $Lang['FormReset']		= "Limpiar forma";

  $Lang['Delete']		= "Borrar";
  $Lang['PrintVers']		= "Versión imprimible";
  $Lang['Close']		= "Cerrar";
  $Lang['Edit']                 = "Editar";

  $Lang['Mainmenu']['Title']	= "Men&uacute; principal";
  $Lang['Mainmenu']['PlsChoose']= "Por favor seleccione del men&uacute; principal";
  $Lang['Search']['Search']	= "Buscar";
  $Lang['Search']['For']	= "Buscar por";
  $Lang['Search']['In']		= "Buscar en";
  $Lang['Search']['Go']		= "Iniciar la b&uacute;squeda";
  $Lang['Search']['Result']	= "Resultados de la b&uacute;squeda";
  $Lang['Search']['Hits']       = "&Eacute;xitos";

  $Lang['Search']['Menutitle']	= "T&iacute;tulo del men&uacute;";
  $Lang['Search']['Categories']	= "Categor&iacute;as";
  $Lang['Search']['Ingredients']= "Ingredientes";
  $Lang['Search']['NoResult']	= "No se obtuvieron resultados.";

  $Lang['Recipe']['Edit']	= "Editar receta";
  $Lang['Recipe']['Delete']	= "Borrar receta";
  $Lang['Recipe']['Deleted']    = "Receta borrada";
  $Lang['Recipe']['Insert']     = "Insertar receta en la base de datos";
  $Lang['Recipe']['Inserted']   = "Receta insertada.";

  $Lang['Auth']['LoggedInAs']   = "Conectado como";
  $Lang['Auth']['Logout']       = "Salir";
  $Lang['Auth']['NoLogin']      = "No conectado";

  $Lang['AllRecipes']		= "Todas las recetas";
  $Lang['CatChoose']		= "Selector de categoría";

  $Lang['Aliases']['DefDescr']  = "escriba la lista de aliases separada por espacios.";

  $Lang['Category']['Title']    = "Categor&iacute;as definidas";
  $Lang['Category']['Help']     = <<<EOT
      Por favor seleccione 5 diferentes categor&iacute;as como máximo. Haga click
      en la categor&iacute;a para insertar el valor en la forma.
EOT;

  $Lang['UnitInfo']['Title']    = "Informaci&oacute;n de unidades";
  $Lang['UnitInfo']['MMText']   = "Unidades en formato Meal-Master.";
  $Lang['UnitInfo']['RKText']   = "Unidades en formato REZKONV.";

  /*
   * Infos:
   */

  $Lang['Infos']['Title']        = "Informaci&oacute;n acerca de " . KOCHSUITE;

  $Lang['Homepage']['Title']	= 'P&aacute;gina de inicio';
  $Lang['Homepage']['Text'][0]	= <<<EOT
      <a href="http://koch-suite.berlios.de/">http://koch-suite.berlios.de/</a>:
      Informaci&oacute;n actualizada de &eacute;ste proyecto, y las m&aacute;s recientes 
      versiones de 
EOT;
  $Lang['Homepage']['Text'][0] .= KOCHSUITE . " pueden ser encontradas aquí";

  $Lang['Version']['Title']             = 'Versi&oacute;n';
  $Lang['Version']['Text']['Pre']       = "Est&aacute; instalado " . KOCHSUITE;
  $Lang['Version']['Text']['Post']      = "";

  $Lang['Requirements']['Title']	= 'Requisitos';
  $Lang['Requirements']['Text'][0]	= 'Software requerido:';

  $Lang['Requirements']['Software'][0]	= '<a href="http://www.mysql.org">MySQL</a> (probado con las versiones 3.22 y 3.23) o <A HREF="http://www.postgresql.org/">PostgreSQL</A> (probado con la versi&oacute;n 7.0.3)';
  $Lang['Requirements']['Software'][1]	= '<a href="http://www.php.net">PHP</a> (Version >= 4.0.4), con soporte para MySQL o PostgreSQL y un PEAR actual,';
  $Lang['Requirements']['Software'][2]	= 'un servidor Web soportado por PHP (p. ej. <a href="http://www.apache.org">Apache</a>)';

  $Lang['Requirements']['Text'][1]	= 'Probado en los siguientes sistemas operativos (en orden alfab&eacute;tico):';

  $Lang['Requirements']['OSes'][0]	= 'AIX 4.3';
  $Lang['Requirements']['OSes'][1]	= 'FreeBSD 4.*';
  $Lang['Requirements']['OSes'][2]	= 'Linux (Debian 2.2 y Mandrake 8.2/RedHat 7.2)';
  $Lang['Requirements']['OSes'][3]	= 'OpenBSD 3.1';

  $Lang['Requirements']['Text'][2]	= <<<EOT
      Necesitar&aacute; tener PHP compilado con soporte para MySQL y PostgreSQL
      como un int&eacute;rprete independiente para utilizar las herramientas de 
      l&iacute;nea de comando. Para la interfaz web necesitar&aacute; PHP instalado como
      CGI o como m&oacute;dulo de Apache.
EOT;

  $Lang['License']['Title']	= "Licencia";
  $Lang['License']['Pre'][0]	= "Todo el paquete " . KOCHSUITE . " es liberado en los t&eacute;rminos de la siguiente licencia estilo BSD.\n";
  $Lang['License']['Post'][0]	= "";


  /* 
   * Help:
   */

  $Lang['Helptext']['General']	= <<<EOT
    <p class="top">
      &Eacute;ste programa consiste en &eacute;stas tres partes principales:
      una gran biblioteca que contiene todas las funciones de conversi&oacute;n y salida,
      (wrappers m&aacute;s o menos triviales para &eacute;sta biblioteca), unas pocas
      herramientas de l&iacute;nea de comando y un frontend basado en web.
    <p>
EOT;

  $Lang['Language']['Title']	= "Opciones de idioma";
  $Lang['Language']['Text'][0]	= <<<EOT
      La Kuch-Suite soporta varios idiomas desde la versión 0.5. 
      Para seleccionar otro idioma, ajuste su browser (p. ej. Mozilla:
      Editar -> Preferencias -> Navegador -> Idiomas)
      Si el idioma que Ud. especific&oacute; existe, ver&aacute; todas las 
      p&aacute;ginas siguientes en el idioma solicitado. De otra forma el idioma
      por default (Alem&aacute;n "de") ser&aacute; utilizado.
      Claro que no se traducir&aacute;n las recetas mismas. Esta selecci&oacute;n solamente
      influye en el idioma de la interfaz.
EOT;

  $Lang['Helptext']['CL']['Title']	= "Herramientas de l&iacute;nea de comandos";
  $Lang['Helptext']['CL']['commands'][0]['Name'] = "mmimport";
  $Lang['Helptext']['CL']['commands'][0]['Text'] = <<<EOT
          Importa recetas. La entrada se esperar&aacute; de la entrada estandar
          (STDIN).
          Las recetas ser&aacute;n extraidas del texto circundante, y pueden estar
          en formato Meal-Master &oacute; en formato
          <a href="http://home.t-online.de/home/ufetzer/">REZKONV</a>.
          Lea tambi&eacute;n <code>mmimport(1)</code>
EOT;
  $Lang['Helptext']['CL']['commands'][1]['Name'] = "rezept";
  $Lang['Helptext']['CL']['commands'][1]['Text'] = <<<EOT
          Busca recetas en la base de datos y las imprime como
          c&oacute;digo fuente de LaTeX, en formato Meal-Master, &oacute;
          como texto legible por humanos, a la salida est&aacute;ndar.
          Lea <code>rezept(1)</code>.
EOT;

  $Lang['Helptext']['WWW']['Title']	= "Web-Frontend";
  $Lang['Helptext']['WWW']['part'][0]['Title']	= "Interfaz de b&uacute;squeda";
  $Lang['Helptext']['WWW']['part'][0]['Text']	= <<<EOT
        Ud. puede buscar en la base de datos por t&eacute;rminos en 
          <ul>
            <li>los t&iacute;tulos de los men&uacute;s</li>
            <li>las categor&iacute;as</li>
            <li>las listas de ingredientes</li>
          </ul>
        El resultado es una lista de todas las recetas que contienen el
        t&eacute;rmino especificado en el campo seleccionado.
        Seleccione "Buscar" en el men&uacute; principal, escriba el t&eacute;rmino en 
        la forma, elija de "Buscar en" en donde se buscar&aacute; por el t&eacute;rmino
        y haga click en el bot&oacute;n "Iniciar b&uacute;squeda".
        A partir de la versi&oacute;n <i>0.5</i> Ud. puede combinar varios 
        t&eacute;rminos usando la palabra "AND" (¡en mayúsculas!). De esta forma
        podemos finalmente buscar por "<code>churros AND chocolate</code>"
EOT;
  $Lang['Helptext']['WWW']['part'][1]['Title']  = "Interfaz para guardar y editar";
  $Lang['Helptext']['WWW']['part'][1]['Text']   = <<<EOT
        &Eacute;sta interfaz le permite editar recetas guardadas o guardar nuevas 
        recetas. Los n&uacute;meros deben usar &raquo;<code>.</code>&laquo; 
        (punto) como separador decimal.
        Las unidades deben ser unidades v&aacute;lidas de 
        <a href="units.php" target="units" onclick="units();">Mealmaster,
        RezKonv or aliases definidos</a> y deben estar separadas de la 
        cantidad por un espacio .
EOT;

  $Lang['Helptext']['Feedback']['Title']	= "Retroalimentación";
  $Lang['Helptext']['Feedback']['Text'][0]	= <<<EOT
      Tenemos una lista de correo para usuarios y desarrolladores:
      <i>koch-suite-devel@lists.berlios.de</i>. &Eacute;sta lista de correo es
      p&uacute;blica, pero solamente las direcciones e-mail subscritas pueden
      escribir a la lista (para evitar spam). Por favor lea
      <a href="http://lists.berlios.de/mailman/listinfo/koch-suite-devel">&eacute;sta 
      p&aacute;gina</a> para mayor informaci&oacute;n.
EOT;

?>
