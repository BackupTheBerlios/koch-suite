# MySQL dump 7.1
#
# $Id: init_db.sql,v 1.3 2000/11/21 01:57:15 michael Exp $
#
# Please see the MySQL-Documentation for further details about MySQL and
# it's implementation of SQL available at http://www.mysql.org.
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
  MENUE_ID int(11),
  PRIMARY KEY (ID)
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
  PRIMARY KEY (ID)
);

#
# Values for table 'EINHEITEN'
#
# This are the common units, used by Mealmaster
#

INSERT INTO EINHEITEN VALUES (1,'x','','Pro Rezept',NULL,NULL);
INSERT INTO EINHEITEN VALUES (2,'sm','klein(e)','',NULL,NULL);
INSERT INTO EINHEITEN VALUES (3,'md','mittel','',NULL,NULL);
INSERT INTO EINHEITEN VALUES (4,'lg','gross','',NULL,NULL);
INSERT INTO EINHEITEN VALUES (5,'cn','Dose','',NULL,NULL);
INSERT INTO EINHEITEN VALUES (6,'pk','Packung','',NULL,NULL);
INSERT INTO EINHEITEN VALUES (7,'pn','Prise','engl: pinch',NULL,NULL);
INSERT INTO EINHEITEN VALUES (8,'dr','Tropfen','',NULL,NULL);
INSERT INTO EINHEITEN VALUES (9,'ds','Spur','Schuss',NULL,NULL);
INSERT INTO EINHEITEN VALUES (10,'ct','Karton','',NULL,NULL);
INSERT INTO EINHEITEN VALUES (11,'bn','Bund','',NULL,NULL);
INSERT INTO EINHEITEN VALUES (12,'sl','Scheibe','',NULL,NULL);
INSERT INTO EINHEITEN VALUES (13,'ea','','',NULL,NULL);
INSERT INTO EINHEITEN VALUES (14,'t','Teel.','',NULL,NULL);
INSERT INTO EINHEITEN VALUES (15,'ts','Teel.','',NULL,NULL);
INSERT INTO EINHEITEN VALUES (16,'T','Essl.','',NULL,NULL);
INSERT INTO EINHEITEN VALUES (17,'tb','Essl.','',NULL,NULL);
INSERT INTO EINHEITEN VALUES (18,'c','Tasse','ca. 250 ml',250.000,20);
INSERT INTO EINHEITEN VALUES (19,'pt','Pint','ca. 1/2 Liter',500.000,20);
INSERT INTO EINHEITEN VALUES (20,'l','Liter','',0.000,0);
INSERT INTO EINHEITEN VALUES (21,'qt','Liter','Quart entspr. ca 1 Liter',1.000,20);
INSERT INTO EINHEITEN VALUES (22,'qt','Galone','',4.000,20);
INSERT INTO EINHEITEN VALUES (23,'oz','Unze','',30.000,24);
INSERT INTO EINHEITEN VALUES (24,'g','Gramm','',0.000,0);
INSERT INTO EINHEITEN VALUES (25,'lb','Engl. Pfund','Englisches Pfund',450.000,24);
INSERT INTO EINHEITEN VALUES (26,'ml','ml','',0.000,0);
INSERT INTO EINHEITEN VALUES (27,'cb','ml','',0.000,0);
INSERT INTO EINHEITEN VALUES (28,'cl','Centiliter','',10.000,26);
INSERT INTO EINHEITEN VALUES (29,'dl','Deziliter','',100.000,26);
INSERT INTO EINHEITEN VALUES (30,'cg','Zentigramm','',0.010,24);
INSERT INTO EINHEITEN VALUES (31,'dg','Dezigramm','',0.100,24);
INSERT INTO EINHEITEN VALUES (32,'kg','Kg','Kilogramm',1000.000,24);
INSERT INTO EINHEITEN VALUES (33,'fl','fl. Unze','fluid ounce',30.000,26);
INSERT INTO EINHEITEN VALUES (34,'','','',0.000,0);

#
# Table structure for table 'KAT'
#
CREATE TABLE KAT (
  ID int(11) DEFAULT '0' NOT NULL auto_increment,
  KATEGORIE_ID int(11),
  MENUE_ID int(11),
  PRIMARY KEY (ID)
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
  PORTIONEN smallint(6),
  TITEL varchar(255),
  PRIMARY KEY (ID)
);

#
# Table structure for table 'REZEPT'
#
CREATE TABLE REZEPT (
  ID int(11) DEFAULT '0' NOT NULL auto_increment,
  MENUE_ID int(11),
  TITEL varchar(255),
  PRIMARY KEY (ID)
);

#
# Table structure for table 'ZUTATEN'
#
CREATE TABLE ZUTATEN (
  ID int(11) DEFAULT '0' NOT NULL auto_increment,
  MENGE float(5,3),
  EINHEIT char(2),
  TEXT varchar(255),
  REZEPT_ID int(11),
  PRIMARY KEY (ID)
);

