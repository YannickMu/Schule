/*
Aufgabe: 4-10, Wurzelberechnungen
Datum: 31.10.2023
Autor: Yannick Müller
*/
#include <stdio.h>
#include <math.h>
int main(){
    //Deklaration;
    double eingabe;
    double wurzel;
    //Eingabe
    printf("Von welcher Zahl soll die Wurzel berechnet werden?");
    scanf("%lf", &eingabe);
    //Verarbeitung
    wurzel = sqrt(eingabe);
    //Ausgabe
    printf("Die Wurzel aus %f betraegt %f.", eingabe, wurzel);
    return 0;
}