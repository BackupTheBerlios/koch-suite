<?

  /* Cetral configuration-file for the koch-suite
   * by Michael Lestinsky <michael@zaphod.rhein-neckar.de>, Oktober 2000
   * $Id: config.inc,v 1.1 2000/10/26 01:20:25 michael Exp $
   */

  $DB_SERVER   = "magrathea";
  $DB_USER     = "";
  $DB_PASSWORD = "";
  $DB_NAME     = "DBkoch";

  /* Connect to the Database */
  mysql_pconnect($DB_SERVER, $DB_USER, $DB_PASSWORD);

  /* Open filedescriptors for the STD-channels */
  $stdin  = fopen("php://stdin", "r");
  $stdout = fopen("php://stdout", "w");
  $stderr = fopen("php://stderr", "w");

?>
