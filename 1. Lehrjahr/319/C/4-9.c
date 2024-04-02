/*
Aufgabe: 4-9, Kreisberechnungen
Datum: 31.10.2023
Autor: Yannick Müller
*/
#include <stdio.h>
int main(){
    //Deklaration
    const float pi = 3.1415;
    float radius;
    double flaeche;
    double umfang;
    //Eingabe
    printf("Wie ist der Radius des Kreises? [m]");
    scanf("%f", &radius);
    //Verarbeitung
    flaeche = pi*(radius*radius);
    umfang = (2*radius)*pi;
    //Ausgabe
    printf("Der Kreis mit dem Radius von: %.2f m\nHat einen Umfang von: %.2f m\nUnd eine Flaeche von: %.2f m2.", radius, umfang, flaeche);
    return 0;
}