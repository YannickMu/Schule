/*
Autor:		Yannick Müller
Aufgabe:	Modul 164 Aufgabe 2-4
Datum:		06.02.2024
Datenbank:	videothek
*/

/*Datenbank löschen falls existierend*/
DROP DATABASE IF EXISTS videothek;

/*Datenbank neu erstellen*/
CREATE DATABASE videothek;

/*Datenbank aktivieren*/
USE videothek;

/*Film-Tabelle erstellen*/
CREATE TABLE film (
	id_Videonummer INTEGER NOT NULL AUTO_INCREMENT,
	Titel VARCHAR(50) NOT NULL,
	Dauer TIME,
	Kategorie VARCHAR(3) NOT NULL,
	Jahr YEAR,
	Frei_ab INTEGER NOT NULL,
	PreisProTag DECIMAL(4,2) NOT NULL,
	EPreis DECIMAL(4,2),
	Lagerbestand INTEGER DEFAULT 1,
	PRIMARY KEY(id_Videonummer)
)ENGINE = InnoDB;

/*Kunde-Tabelle erstellen*/
CREATE TABLE kunde (
	id_Kundenummer INTEGER NOT NULL AUTO_INCREMENT,
	Anrede ENUM('Herr','Frau') NOT NULL,
	Vorname VARCHAR(50) NOT NULL,
	Nachname VARCHAR(50) NOT NULL,
	Strasse VARCHAR(50) NOT NULL,
	PLZ CHAR(4) NOT NULL,
	Ort VARCHAR(50) NOT NULL,
	Telefon VARCHAR(50) NOT NULL,
	Geburtsdatum DATE NOT NULL,
	PRIMARY KEY(id_Kundenummer)
)ENGINE = InnoDB;

/*Ausleihe-Tabelle erstellen*/
CREATE TABLE ausleihe (
	id_Ausleihnr INTEGER NOT NULL AUTO_INCREMENT,
	fs_Kundennummer INTEGER NOT NULL,
	fs_Videonummer INTEGER NOT NULL,
	Ausleihe DATE NOT NULL DEFAULT TIMESTAMP,
	Rueckgabe DATE,
	PRIMARY KEY(id_Ausleihnr),
	FOREIGN KEY(fs_Kundennummer) REFERENCES kunde(id_Kundenummer),
	FOREIGN KEY(fs_Videonummer) REFERENCES film(id_Videonummer)
)ENGINE = InnoDB;

/*Darsteller-Tabelle erstellen*/
CREATE TABLE darsteller(
	id_Darsteller INTEGER NOT NULL AUTO_INCREMENT,
	vorname VARCHAR(20) NOT NULL,
	nachname VARCHAR(20) NOT NULL,
	PRIMARY KEY(id_Darsteller)
)ENGINE = InnoDB;

/*film_darsteller-Tabelle erstellen*/
CREATE TABLE film_darsteller(
	fs_Videonummer INTEGER NOT NULL,
	fs_Darstellernummer INTEGER NOT NULL,
	PRIMARY KEY(fs_Videonummer, fs_Darstellernummer),
	FOREIGN KEY(fs_Videonummer) REFERENCES film(id_Videonummer),
	FOREIGN KEY(fs_Darstellernummer) REFERENCES darsteller(id_Darsteller)
)ENGINE = InnoDB;

/*Regisseur-Tabelle erstellen*/
CREATE TABLE regisseur(
	id_Regisseur INTEGER NOT NULL AUTO_INCREMENT,
	vorname VARCHAR(20) NOT NULL,
	nachname VARCHAR(20) NOT NULL,
	PRIMARY KEY(id_Regisseur)
)ENGINE = InnoDB;

/*film_regisseur-Tabelle erstellen*/
CREATE TABLE film_regisseur(
	fs_Videonummer INTEGER NOT NULL,
	fs_Regisseurnummer INTEGER NOT NULL,
	PRIMARY KEY(fs_Videonummer, fs_Regisseurnummer),
	FOREIGN KEY(fs_Videonummer) REFERENCES film(id_Videonummer),
	FOREIGN KEY(fs_Regisseurnummer) REFERENCES regisseur(id_Regisseur)
)ENGINE = InnoDB;