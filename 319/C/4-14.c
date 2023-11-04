/*
Aufgabe: 4-13, Satz des Pytagoras
Datum: 31.10.2023
Autor: Yannick Müller
*/
#include <stdio.h>
#include <math.h>

int main(){
    //Deklaration;
    float komma;
    int rond;
    double resultat;
    //Eingabe
    printf("Geben Sie eine Kommazahl ein:");
    scanf("%f", &komma);
    printf("Geben Sie die Anzahl Kommastellen ein:");
    scanf("%d", &rond);
    //Verarbeitung
    resultat = round(komma * pow(10, rond));
    resultat /= pow(10, rond);
    //Ausgabe
    printf("Gerundet: %f.", resultat);
    return 0;
}