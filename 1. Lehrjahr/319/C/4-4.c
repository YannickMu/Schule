/*
Aufgabe: 4-4, Leistung auf dem Rennrad
Datum: 20.09.2023
Autor: Yannick Müller
*/

#include <stdio.h>

int main(){
    char name[50] = "Marco Pantani";
    float Gewicht = 53;
    float GewichtV = 8.5;
    float Strecke = 14;
    float Hoehe = 1110;
    float Dauer = 37.5;

    float Steigungsleistung;
    float Geschwindigkeit;
    float Luftwiederstand;
    float Rollwiederstand;

    float Gesamtleistung;
    float GesamtleistungG;
    //Eingabe
    printf("Berechnung Leistung auf dem Rennrad\n----------------------------------------------------------------------------------------------------------------\n");
    printf("Angaben zur Person:\n");
    printf("Name:\t\t\t%s\n", name);
    printf("Gewicht:\t\t%.1f kg\n", Gewicht);
    printf("Gewicht Rennrad:\t%.1f kg\n", GewichtV);
    printf("Streckenlänge:\t\t%.1f km\n", Strecke);
    printf("Anstieg:\t\t%.1f m\n", Hoehe);
    printf("Fahrzeit:\t\t%.1f min\n\n", Dauer);
    //Verarbeitung
    Steigungsleistung = 9.81 * (Gewicht + GewichtV) * Hoehe / (60 * Dauer);
    Geschwindigkeit = 1000 * Strecke / (60 * Dauer);
    Luftwiederstand = 0.244 * Geschwindigkeit * Geschwindigkeit * Geschwindigkeit;
    Rollwiederstand = 0.05 * (Gewicht + GewichtV) * Geschwindigkeit;

    Gesamtleistung = Steigungsleistung + Rollwiederstand + Luftwiederstand;
    GesamtleistungG = Gesamtleistung / Gewicht;
    printf("Gesamtleistung:\t\t\t\t%.1f W\n", Gesamtleistung);
    printf("Gewichtsbezogene Gesamtleistung:\t%.1f W/KG\n", GesamtleistungG);
    return 0;
}