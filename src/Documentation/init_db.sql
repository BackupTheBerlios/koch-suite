# MySQL dump 7.1
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
  PORTTIONEN smallint(6),
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

