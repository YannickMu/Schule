/*
Aufgabe: 4-11, Potenzrechnungen
Datum: 31.10.2023
Autor: Yannick Müller
*/
#include <stdio.h>
#include <math.h>
int main(){
    //Deklaration;
    int basis;
    int exponent;
    int potenz;
    //Eingabe
    printf("Geben sie eine Basis ein.");
    scanf("%d", &basis);
    printf("Geben sie einen Exponenten ein.");
    scanf("%d", &exponent);
    //Verarbeitung
    potenz = pow(basis, exponent);
    //Ausgabe
    printf("%d hoch %d ist %d", basis, exponent, potenz);
    return 0;
}