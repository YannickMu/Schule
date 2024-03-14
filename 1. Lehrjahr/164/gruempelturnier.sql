/*
Autor:		Yannick Müller
Aufgabe:	Modul 164 Aufgabe 2-4
Datum:		06.02.2024
Datenbank:	gruempelturnier
*/

/*Datenbank löschen falls existierend*/
DROP DATABASE IF EXISTS gruempelturnier;

/*Datenbank neu erstellen*/
CREATE DATABASE gruempelturnier;

/*Datenbank aktivieren*/
USE gruempelturnier;

/*schiri-Tabelle erstellen*/
CREATE TABLE schiri (
	id_Schiri INTEGER NOT NULL AUTO_INCREMENT,
	Vorname VARCHAR(20) NOT NULL,
	Nachname VARCHAR(20) NOT NULL,
	PRIMARY KEY(id_Schiri)
)ENGINE = InnoDB;

/*feld-Tabelle erstellen*/
CREATE TABLE feld (
	id_Feld INTEGER NOT NULL AUTO_INCREMENT,
	Verantwortlicher VARCHAR(50) NOT NULL,
	PRIMARY KEY(id_Feld)
)ENGINE = InnoDB;

/*mannschaft-Tabelle erstellen*/
CREATE TABLE mannschaft (
	id_Mannschaft INTEGER NOT NULL AUTO_INCREMENT,
	Name VARCHAR(20) NOT NULL,
	ORT VARCHAR(30) NOT NULL,
	Kontaktperson VARCHAR(40) NOT NULL,
	Telefon VARCHAR(15),
	PRIMARY KEY(id_Mannschaft)
)ENGINE = InnoDB;

/*spieler-Tabelle erstellen*/
CREATE TABLE spieler(
	id_Spieler INTEGER NOT NULL AUTO_INCREMENT,
	Anrede ENUM('Herr', 'Frau') NOT NULL,
	vorname VARCHAR(20) NOT NULL,
	nachname VARCHAR(20) NOT NULL,
	Geburtsdatum DATE NOT NULL,
	fs_Mannschaft INTEGER NOT NULL,
	PRIMARY KEY(id_Spieler),
	FOREIGN KEY(fs_Mannschaft) REFERENCES mannschaft(id_Mannschaft)
)ENGINE = InnoDB;

/*spiel-Tabelle erstellen*/
CREATE TABLE spiel(
	id_Spiel INTEGER NOT NULL AUTO_INCREMENT,
	fs_M1 INTEGER NOT NULL,
	fs_M2 INTEGER NOT NULL,
	fs_Feld INTEGER NOT NULL,
	fs_Schiri INTEGER NOT NULL,
	Datum_Zeit DATETIME NOT NULL,
	Tore_M1 INTEGER NOT NULL,
	Tore_M2 INTEGER NOT NULL,
	PRIMARY KEY(id_Spiel),
	FOREIGN KEY(fs_M1) REFERENCES mannschaft(id_Mannschaft),
	FOREIGN KEY(fs_M2) REFERENCES mannschaft(id_Mannschaft),
	FOREIGN KEY(fs_Feld) REFERENCES feld(id_Feld),
	FOREIGN KEY(fs_Schiri) REFERENCES schiri(id_Schiri)
)ENGINE = InnoDB;