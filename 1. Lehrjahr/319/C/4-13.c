/*
Aufgabe: 4-13, Satz des Pytagoras
Datum: 31.10.2023
Autor: Yannick Müller
*/
#include <stdio.h>
#include <math.h>

int main(){
    //Deklaration;
    float kata;
    float katb;
    float hypc;
    //Eingabe
    printf("Geben Sie die Kathete a ein.");
    scanf("%f", &kata);
    printf("Geben Sie die Kathete b ein.");
    scanf("%f", &katb);
    //Verarbeitung
    hypc = sqrt(pow(kata, 2) + pow(katb, 2));
    //Ausgabe
    printf("Die Hypothenuse c hat die Laenge %.2f.", hypc);
    return 0;
}