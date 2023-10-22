/*
Aufgabe: 4-2, Mathematische Rechenoperationen und Klammern
Datum: 19.09.2023
Autor: Yannick Müller
*/

#include <stdio.h>
//Formel 1
const int ai = 3;
const int bi = 5;
const int resultat1 = (3*bi)/8*(((0-1)*2*ai*bi)/(ai+bi)-(4*(ai*ai)*(bi*bi))/(ai-bi));
const float a = 3;
const float b = 5;
const float resultat1f = (3*b)/8*(((0-1)*2*a*b)/(a+b)-(4*(a*a)*(b*b))/(a-b));
//Formel 2
const int xi = 9;
const int yi = 11;
const int zi = 13;
const int resultat2 = ((0-1)*5*xi)/(yi*zi)-(10*yi)/(xi*zi)-(15*zi)/(xi*yi);
const float x = 9;
const float y = 11;
const float z = 13;
const float resultat2f = ((0-1)*5*x)/(y*z)-(10*y)/(x*z)-(15*z)/(x*y);

int main(){
    printf("Mathematische Rechenoperatoren\n-------------------------------------------------\n\n");
    printf("Formel 1 mit Ganzzahltypen\t= %d\n", resultat1);
    printf("Formel 1 mit Fliesskommatypen\t= %f\n", resultat1f);
    printf("Formel 2 mit Ganzzahltypen\t= %d\n", resultat2);
    printf("Formel 2 mit Fliesskommatypen\t= %f\n", resultat2f);
    return 0;
}