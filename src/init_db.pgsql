-- 
-- $Id: init_db.pgsql,v 1.7 2001/09/06 13:05:13 bus Exp $
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
  TEXT varchar(15),
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

INSERT INTO EINHEITEN VALUES (1,'x','','Pro Rezept',NULL,NULL,'x','J');
INSERT INTO EINHEITEN VALUES (2,'sm','klein(e)','',NULL,NULL,'klein.','J');
INSERT INTO EINHEITEN VALUES (3,'md','mittel','',NULL,NULL,'mittl.','J');
INSERT INTO EINHEITEN VALUES (4,'lg','gross','',NULL,NULL,'groß.','J');
INSERT INTO EINHEITEN VALUES (5,'cn','Dose','',NULL,NULL,'Dose/n','J');
INSERT INTO EINHEITEN VALUES (6,'pk','Packung','',NULL,NULL,'Pack.','J');
INSERT INTO EINHEITEN VALUES (7,'pn','Prise','engl: pinch',NULL,NULL,'Prise/n','J');
INSERT INTO EINHEITEN VALUES (8,'dr','Tropfen','',NULL,NULL,'Tropfen','J');
INSERT INTO EINHEITEN VALUES (9,'ds','Schuss','Schuss',NULL,NULL,'Schuss','J');
INSERT INTO EINHEITEN VALUES (10,'ct','Karton','',NULL,NULL,'Karton','J');
INSERT INTO EINHEITEN VALUES (11,'bn','Bund','',NULL,NULL,'Bund','J');
INSERT INTO EINHEITEN VALUES (12,'sl','Scheibe','',NULL,NULL,'Scheib.','J');
INSERT INTO EINHEITEN VALUES (13,'ea','','',NULL,NULL,'','N');
INSERT INTO EINHEITEN VALUES (14,'t','Teel.','',NULL,NULL,'Teel.','N');
INSERT INTO EINHEITEN VALUES (15,'ts','Teel.','',NULL,NULL,'Teel.','J');
INSERT INTO EINHEITEN VALUES (16,'T','Essl.','',NULL,NULL,'Essl.','N');
INSERT INTO EINHEITEN VALUES (17,'tb','Essl.','',NULL,NULL,'Essl.','J');
INSERT INTO EINHEITEN VALUES (18,'c','Tasse','ca. 250 ml',250.000,20,'Tasse/n','J');
INSERT INTO EINHEITEN VALUES (19,'pt','Pint','ca. 1/2 Liter',500.000,20,'pt','J');
INSERT INTO EINHEITEN VALUES (20,'l','Liter','',0.000,0,'Liter','J');
INSERT INTO EINHEITEN VALUES (21,'qt','Liter','Quart entspr. ca 1 Liter',1.000,20,'qt','J');
INSERT INTO EINHEITEN VALUES (22,'qt','Galone','',4.000,20,'qt','J');
INSERT INTO EINHEITEN VALUES (23,'oz','Unze','',30.000,24,'oz','J');
INSERT INTO EINHEITEN VALUES (24,'g','g','',0.000,0,'Gramm','J');
INSERT INTO EINHEITEN VALUES (25,'lb','Engl. Pfund','Englisches Pfund',450.000,24,'lb','J');
INSERT INTO EINHEITEN VALUES (26,'ml','ml','',0.000,0,'ml','J');
INSERT INTO EINHEITEN VALUES (27,'cb','ml','',0.000,0,'ml','N');
INSERT INTO EINHEITEN VALUES (28,'cl','Centiliter','',10.000,26,'cl','J');
INSERT INTO EINHEITEN VALUES (29,'dl','Deziliter','',100.000,26,'dl','J');
INSERT INTO EINHEITEN VALUES (30,'cg','Zentigramm','',0.010,24,'cg','J');
INSERT INTO EINHEITEN VALUES (31,'dg','Dezigramm','',0.100,24,'dg','J');
INSERT INTO EINHEITEN VALUES (32,'kg','Kg','Kilogramm',1000.000,24,'Kilo','J');
INSERT INTO EINHEITEN VALUES (33,'fl','fl. Unze','fluid ounce',30.000,26,'fl','J');
INSERT INTO EINHEITEN VALUES (34,'','','',0.000,0,'','J');

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
-- Table structure for table 'usertable'
--
CREATE TABLE usertable (
  username varchar(20) NOT NULL default '',
  usertype varchar(20) default NULL,
  password varchar(255) default NULL
);
CREATE INDEX user_name on usertable (username);

