-- 
-- $Id: init_db.pgsql,v 1.13 2002/05/12 11:29:26 lestinsky Exp $
-- init_db_postgreSQL.sql
-- 2001-07-25 Michael Bussmann <bus@mb-net.net>
--

--
-- Table structure for table 'ANWEISUNG'
--
CREATE TABLE ANWEISUNG (
  TEXT text,
  MENUE_ID smallint DEFAULT '0' NOT NULL
);
CREATE INDEX anweisung_mid ON anweisung (MENUE_ID);

--
-- Table structure for table 'EINHEITEN'
--
CREATE TABLE EINHEITEN (
  ID smallint NOT NULL PRIMARY KEY,
  ABBREV char(2),
  DESCR varchar(255),
  FAKTOR real,
  FAKTOR_ID smallint,
  RK_ABBREV varchar(11),
  MMUSE char(1)
);
CREATE INDEX einheiten_abbrev ON einheiten (ABBREV);

--
-- Dumping data for table 'EINHEITEN'
--
INSERT INTO EINHEITEN VALUES (1,'x','Pro Rezept',NULL,NULL,'x','J');
INSERT INTO EINHEITEN VALUES (2,'sm','',NULL,NULL,'klein.','J');
INSERT INTO EINHEITEN VALUES (3,'md','',NULL,NULL,'mittl.','J');
INSERT INTO EINHEITEN VALUES (4,'lg','',NULL,NULL,'groß.','J');
INSERT INTO EINHEITEN VALUES (5,'cn','',NULL,NULL,'Dose/n','J');
INSERT INTO EINHEITEN VALUES (6,'pk','',NULL,NULL,'Pack.','J');
INSERT INTO EINHEITEN VALUES (7,'pn','engl: pinch',NULL,NULL,'Prise/n','J');
INSERT INTO EINHEITEN VALUES (8,'dr','',NULL,NULL,'Tropfen','J');
INSERT INTO EINHEITEN VALUES (9,'ds','Schuss',NULL,NULL,'Schuss','J');
INSERT INTO EINHEITEN VALUES (10,'ct','',NULL,NULL,'Karton','J');
INSERT INTO EINHEITEN VALUES (11,'bn','',NULL,NULL,'Bund','J');
INSERT INTO EINHEITEN VALUES (12,'sl','',NULL,NULL,'Scheib.','J');
INSERT INTO EINHEITEN VALUES (13,'ea','',NULL,NULL,'','N');
INSERT INTO EINHEITEN VALUES (14,'t','',NULL,NULL,'Teel.','N');
INSERT INTO EINHEITEN VALUES (15,'ts','',NULL,NULL,'Teel.','J');
INSERT INTO EINHEITEN VALUES (16,'T','',NULL,NULL,'Essl.','N');
INSERT INTO EINHEITEN VALUES (17,'tb','',NULL,NULL,'Essl.','J');
INSERT INTO EINHEITEN VALUES (18,'c','ca. 250 ml',250.000,20,'Tasse/n','J');
INSERT INTO EINHEITEN VALUES (19,'pt','ca. 1/2 Liter',500.000,20,'pt','J');
INSERT INTO EINHEITEN VALUES (20,'l','',0.000,0,'Liter','J');
INSERT INTO EINHEITEN VALUES (21,'qt','Quart entspr. ca 1 Liter',1.000,20,'qt','J');
INSERT INTO EINHEITEN VALUES (22,'ga','',4.000,20,'ga','J');
INSERT INTO EINHEITEN VALUES (23,'oz','',30.000,24,'oz','J');
INSERT INTO EINHEITEN VALUES (24,'g','',0.000,0,'Gramm','J');
INSERT INTO EINHEITEN VALUES (25,'lb','Englisches Pfund',450.000,24,'lb','J');
INSERT INTO EINHEITEN VALUES (26,'ml','',0.000,0,'ml','J');
INSERT INTO EINHEITEN VALUES (27,'cb','',0.000,0,'ml','N');
INSERT INTO EINHEITEN VALUES (28,'cl','',10.000,26,'cl','J');
INSERT INTO EINHEITEN VALUES (29,'dl','',100.000,26,'dl','J');
INSERT INTO EINHEITEN VALUES (30,'cg','',0.010,24,'cg','J');
INSERT INTO EINHEITEN VALUES (31,'dg','',0.100,24,'dg','J');
INSERT INTO EINHEITEN VALUES (32,'kg','Kilogramm',1000.000,24,'Kilo','J');
INSERT INTO EINHEITEN VALUES (33,'fl','fluid ounce',30.000,26,'fl','J');
INSERT INTO EINHEITEN VALUES (34,'','',0.000,0,'','J');

--
-- Table structure for table 'EINHEITEN_ALIAS'
--
CREATE TABLE EINHEITEN_ALIAS (
  EID smallint DEFAULT '0' NOT NULL,
  TEXT varchar(15) DEFAULT '' NOT NULL
);
CREATE INDEX einheiten_eid ON EINHEITEN_ALIAS (EID);
CREATE INDEX einheiten_alias_text ON EINHEITEN_ALIAS (TEXT);

--
-- Dumping data for table 'EINHEITEN_ALIAS'
--
INSERT INTO EINHEITEN_ALIAS VALUES (2,'kl.');
INSERT INTO EINHEITEN_ALIAS VALUES (4,'gr.');
INSERT INTO EINHEITEN_ALIAS VALUES (12,'Scheibe');
INSERT INTO EINHEITEN_ALIAS VALUES (15,'TL');
INSERT INTO EINHEITEN_ALIAS VALUES (15,'Teeloeffel');
INSERT INTO EINHEITEN_ALIAS VALUES (15,'Teelöffel');
INSERT INTO EINHEITEN_ALIAS VALUES (17,'Esslöffel');
INSERT INTO EINHEITEN_ALIAS VALUES (17,'Essloeffel');
INSERT INTO EINHEITEN_ALIAS VALUES (26,'Milliliter');
INSERT INTO EINHEITEN_ALIAS VALUES (32,'Kilo');
INSERT INTO EINHEITEN_ALIAS VALUES (1,'Stueck');
INSERT INTO EINHEITEN_ALIAS VALUES (1,'Stück');
INSERT INTO EINHEITEN_ALIAS VALUES (17,'EL');
INSERT INTO EINHEITEN_ALIAS VALUES (29,'Deziliter');

--
-- Table structure for table 'KAT'
--
CREATE TABLE KAT (
  ID smallint NOT NULL,
  KATEGORIE_ID smallint,
  MENUE_ID smallint DEFAULT '0' NOT NULL
);
CREATE INDEX kat_kid ON kat (KATEGORIE_ID);
CREATE INDEX kat_mid ON kat (MENUE_ID);

--
-- Table structure for table 'KATEGORIE'
--
CREATE TABLE KATEGORIE (
  ID smallint NOT NULL PRIMARY KEY,
  TEXT varchar(255)
);
CREATE INDEX kategorie_text ON kategorie (TEXT);

--
-- Table structure for table 'MENUE'
--
CREATE TABLE MENUE (
  ID smallint NOT NULL PRIMARY KEY,
  PORTIONEN varchar(255),
  TITEL varchar(255) DEFAULT '' NOT NULL,
  HASH varchar(255)
);
CREATE INDEX menue_hash ON menue (HASH);

--
-- Table structure for table 'REZEPT'
--
CREATE TABLE REZEPT (
  ID smallint NOT NULL PRIMARY KEY,
  MENUE_ID smallint DEFAULT '0' NOT NULL,
  TITEL varchar(255)
);
CREATE INDEX rezept_mid ON rezept (MENUE_ID);

--
-- Table structure for table 'ZUTATEN'
--
CREATE TABLE ZUTATEN (
  ID smallint NOT NULL PRIMARY KEY,
  MENGE real,
  EINHEIT char(2),
  TEXT varchar(255),
  REZEPT_ID smallint DEFAULT '0' NOT NULL
);
CREATE INDEX zutaten_rid ON zutaten (REZEPT_ID);

--
-- Table structure for table 'unit_langs'
--

CREATE TABLE unit_langs (
  id smallint default NULL,
  lang varchar(5) default NULL,
  text varchar(30) default NULL
);

--
-- Dumping data for table 'unit_langs'
--
INSERT INTO unit_langs VALUES (1,'de','');
INSERT INTO unit_langs VALUES (2,'de','klein(e)');
INSERT INTO unit_langs VALUES (3,'de','mittl.');
INSERT INTO unit_langs VALUES (4,'de','gr.');
INSERT INTO unit_langs VALUES (5,'de','Dose');
INSERT INTO unit_langs VALUES (6,'de','Packung');
INSERT INTO unit_langs VALUES (7,'de','Prise');
INSERT INTO unit_langs VALUES (8,'de','Tropfen');
INSERT INTO unit_langs VALUES (9,'de','Schuss');
INSERT INTO unit_langs VALUES (10,'de','Karton');
INSERT INTO unit_langs VALUES (11,'de','Bund');
INSERT INTO unit_langs VALUES (12,'de','Scheibe');
INSERT INTO unit_langs VALUES (13,'de','');
INSERT INTO unit_langs VALUES (14,'de','Teel.');
INSERT INTO unit_langs VALUES (15,'de','Teel.');
INSERT INTO unit_langs VALUES (16,'de','Essl.');
INSERT INTO unit_langs VALUES (17,'de','Essl.');
INSERT INTO unit_langs VALUES (18,'de','Tasse');
INSERT INTO unit_langs VALUES (19,'de','Pint');
INSERT INTO unit_langs VALUES (20,'de','Liter');
INSERT INTO unit_langs VALUES (21,'de','Quart');
INSERT INTO unit_langs VALUES (22,'de','Gallone');
INSERT INTO unit_langs VALUES (23,'de','Oz.');
INSERT INTO unit_langs VALUES (24,'de','g');
INSERT INTO unit_langs VALUES (25,'de','Engl. Pfund');
INSERT INTO unit_langs VALUES (26,'de','ml');
INSERT INTO unit_langs VALUES (27,'de','ml');
INSERT INTO unit_langs VALUES (28,'de','Centiliter');
INSERT INTO unit_langs VALUES (29,'de','Deziliter');
INSERT INTO unit_langs VALUES (30,'de','Centigram');
INSERT INTO unit_langs VALUES (31,'de','Dezigram');
INSERT INTO unit_langs VALUES (32,'de','Kg');
INSERT INTO unit_langs VALUES (33,'de','fl. Oz.');
INSERT INTO unit_langs VALUES (34,'de','');

INSERT INTO unit_langs VALUES ( 1,'en','per');
INSERT INTO unit_langs VALUES ( 2,'en','small');
INSERT INTO unit_langs VALUES ( 3,'en','medium');
INSERT INTO unit_langs VALUES ( 4,'en','large');
INSERT INTO unit_langs VALUES ( 5,'en','can');
INSERT INTO unit_langs VALUES ( 6,'en','package');
INSERT INTO unit_langs VALUES ( 7,'en','pinch');
INSERT INTO unit_langs VALUES ( 8,'en','drop');
INSERT INTO unit_langs VALUES ( 9,'en','dash');
INSERT INTO unit_langs VALUES (10,'en','carton');
INSERT INTO unit_langs VALUES (11,'en','bunch');
INSERT INTO unit_langs VALUES (12,'en','slice');
INSERT INTO unit_langs VALUES (13,'en','each');
INSERT INTO unit_langs VALUES (14,'en','tsp');
INSERT INTO unit_langs VALUES (15,'en','tsp');
INSERT INTO unit_langs VALUES (16,'en','tbsp');
INSERT INTO unit_langs VALUES (17,'en','tbsp');
INSERT INTO unit_langs VALUES (18,'en','cup');
INSERT INTO unit_langs VALUES (19,'en','pint');
INSERT INTO unit_langs VALUES (20,'en','liter');
INSERT INTO unit_langs VALUES (21,'en','quart');
INSERT INTO unit_langs VALUES (22,'en','gallon');
INSERT INTO unit_langs VALUES (23,'en','ounce');
INSERT INTO unit_langs VALUES (24,'en','g');
INSERT INTO unit_langs VALUES (25,'en','pound');
INSERT INTO unit_langs VALUES (26,'en','ml');
INSERT INTO unit_langs VALUES (27,'en','ml');
INSERT INTO unit_langs VALUES (28,'en','centiliter');
INSERT INTO unit_langs VALUES (29,'en','deciliter');
INSERT INTO unit_langs VALUES (30,'en','centigram');
INSERT INTO unit_langs VALUES (31,'en','decigram');
INSERT INTO unit_langs VALUES (32,'en','kg');
INSERT INTO unit_langs VALUES (33,'en','fl.oz.');
INSERT INTO unit_langs VALUES (34,'en','');

--
-- Table structure for table 'usertable'
--
CREATE TABLE usertable (
  username varchar(20) NOT NULL default '',
  usertype smallint default NULL,
  password varchar(255) default NULL,
  email    varchar(255) default NULL,
  realname varchar(255) default NULL
);
CREATE INDEX user_name on usertable (username);
