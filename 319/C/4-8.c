/*
Aufgabe: 4-8, Zylinderberechnung
Datum: 24.10.2023
Autor: Yannick Müller
*/
#include <stdio.h>
int main(){
    //Deklaration
    float radius;
    float hoehe;
    double volumen;
    double mantelflaeche;
    double grundflaeche;
    double oberflaeche;
    const double pi = 3.14159265359;
    //Eingabe
    printf("Bitte geben Sie den Radius fuer ihren Zylinder ein. [cm]: ");
    scanf("%f", &radius);
    printf("\n");
    printf("Bitte geben Sie die Hoehe fuer ihren Zylinder ein. [cm]: ");
    scanf("%f", &hoehe);
    printf("\n");
    printf("\n");
    //Verarbeitung
    grundflaeche = (radius * radius) * pi;
    volumen = grundflaeche * hoehe;
    mantelflaeche = 2 * pi * radius * hoehe;
    oberflaeche = 2 * grundflaeche + mantelflaeche;
    //Ausgabe
    printf("Das Volumen des Zylinders ist: %.2f cm3\n", volumen);
    printf("Die Oberflaeche des Zylinders ist: %.2f cm2\n", oberflaeche);
}