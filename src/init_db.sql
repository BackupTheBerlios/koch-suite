# MySQL dump 7.1
#
# $Id: init_db.sql,v 1.5 2001/02/17 17:03:14 michael Exp $
#
# Host: magrathea    Database: DBkoch
#--------------------------------------------------------
# Server version	3.22.32

#
# Table structure for table 'ANWEISUNG'
#
CREATE TABLE ANWEISUNG (
  ID int(11) DEFAULT '0' NOT NULL auto_increment,
  TEXT longtext,
  MENUE_ID int(11) DEFAULT '0' NOT NULL,
  PRIMARY KEY (ID),
  KEY MENUE_ID (MENUE_ID)
);

#
# Table structure for table 'EINHEITEN'
#
CREATE TABLE EINHEITEN (
  ID int(11) DEFAULT '0' NOT NULL auto_increment,
  ABBREV char(2),
  TEXT varchar(15),
  DESCR varchar(255),
  FAKTOR float(5,3),
  FAKTOR_ID int(11),
  RK_ABBREV varchar(11),
  MMUSE enum('J','N'),
  PRIMARY KEY (ID)
);

#
# Table structure for table 'KAT'
#
CREATE TABLE KAT (
  ID int(11) DEFAULT '0' NOT NULL auto_increment,
  KATEGORIE_ID int(11),
  MENUE_ID int(11) DEFAULT '0' NOT NULL,
  PRIMARY KEY (ID),
  KEY MENUE_ID (MENUE_ID)
);

#
# Table structure for table 'KATEGORIE'
#
CREATE TABLE KATEGORIE (
  ID int(11) DEFAULT '0' NOT NULL auto_increment,
  TEXT varchar(255),
  PRIMARY KEY (ID)
);

#
# Table structure for table 'MENUE'
#
CREATE TABLE MENUE (
  ID int(11) DEFAULT '0' NOT NULL auto_increment,
  PORTIONEN varchar(255),
  TITEL varchar(255) DEFAULT '' NOT NULL,
  PRIMARY KEY (ID),
  KEY TITEL (TITEL(30))
);

#
# Table structure for table 'REZEPT'
#
CREATE TABLE REZEPT (
  ID int(11) DEFAULT '0' NOT NULL auto_increment,
  MENUE_ID int(11) DEFAULT '0' NOT NULL,
  TITEL varchar(255),
  PRIMARY KEY (ID),
  KEY MENUE_ID (MENUE_ID)
);

#
# Table structure for table 'ZUTATEN'
#
CREATE TABLE ZUTATEN (
  ID int(11) DEFAULT '0' NOT NULL auto_increment,
  MENGE float(5,3),
  EINHEIT char(2),
  TEXT varchar(255),
  REZEPT_ID int(11) DEFAULT '0' NOT NULL,
  PRIMARY KEY (ID),
  KEY REZEPT_ID (REZEPT_ID)
);

#
# Dumping data for table 'EINHEITEN'
#

INSERT INTO EINHEITEN VALUES (1,'x','','Pro Rezept',NULL,NULL,'x','J');
INSERT INTO EINHEITEN VALUES (2,'sm','klein(e)','',NULL,NULL,'klein.','J');
INSERT INTO EINHEITEN VALUES (3,'md','mittel','',NULL,NULL,'mittl.','J');
INSERT INTO EINHEITEN VALUES (4,'lg','gross','',NULL,NULL,'gro�.','J');
INSERT INTO EINHEITEN VALUES (5,'cn','Dose','',NULL,NULL,'Dose/n','J');
INSERT INTO EINHEITEN VALUES (6,'pk','Packung','',NULL,NULL,'Pack.','J');
INSERT INTO EINHEITEN VALUES (7,'pn','Prise','engl: pinch',NULL,NULL,'Prise/n','J');
INSERT INTO EINHEITEN VALUES (8,'dr','Tropfen','',NULL,NULL,'Tropfen','J');
INSERT INTO EINHEITEN VALUES (9,'ds','Spur','Schuss',NULL,NULL,'Schuss','J');
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

# MySQL dump 7.1
#
# Host: magrathea    Database: DBkoch
#--------------------------------------------------------
# Server version	3.22.32

#
# Table structure for table 'EINHEITEN_ALIAS'
#
CREATE TABLE EINHEITEN_ALIAS (
  ID int(11) DEFAULT '0' NOT NULL auto_increment,
  EID int(11) DEFAULT '0' NOT NULL,
  TEXT varchar(15) DEFAULT '' NOT NULL,
  PRIMARY KEY (ID),
  KEY TEXT (TEXT)
);

#
# Dumping data for table 'EINHEITEN_ALIAS'
#

INSERT INTO EINHEITEN_ALIAS VALUES (1,2,'kl.');
INSERT INTO EINHEITEN_ALIAS VALUES (2,4,'gr.');
INSERT INTO EINHEITEN_ALIAS VALUES (3,12,'Scheibe');
INSERT INTO EINHEITEN_ALIAS VALUES (4,15,'TL');
INSERT INTO EINHEITEN_ALIAS VALUES (5,15,'Teeloeffel');
INSERT INTO EINHEITEN_ALIAS VALUES (6,15,'Teel�ffel');
INSERT INTO EINHEITEN_ALIAS VALUES (7,17,'Essl�ffel');
INSERT INTO EINHEITEN_ALIAS VALUES (8,17,'Essloeffel');
INSERT INTO EINHEITEN_ALIAS VALUES (9,26,'Milliliter');
INSERT INTO EINHEITEN_ALIAS VALUES (10,32,'Kilo');
INSERT INTO EINHEITEN_ALIAS VALUES (15,1,'Stueck');
INSERT INTO EINHEITEN_ALIAS VALUES (14,1,'St�ck');
INSERT INTO EINHEITEN_ALIAS VALUES (13,17,'EL');
