/*
Aufgabe: 4-1, Mathematische Rechenoperationen
Datum: 19.09.2023
Autor: Yannick Müller
*/

#include <stdio.h>

const int Zahl1 = 1567;
const int Zahl2 = 367;

const float Zahl1f = 1567;
const float Zahl2f = 367;

int main(){
    int Summe = Zahl1 + Zahl2;
    int Differenz = Zahl1 - Zahl2;
    int Produkt = Zahl1 * Zahl2;
    int Quotient = Zahl1 / Zahl2;
    int Rest = Zahl1 % Zahl2;
    float Divisionf = Zahl1f / Zahl2f;
    //Teilaufgabe 1
    printf("Mathematische Rechenoperatoren\n-------------------------------------------------\n\n");
    printf("Die Summe der Zahlen 1567 und 367 ist %d\n", Summe);
    printf("Die Differenz der Zahlen 1567 und 367 ist %d\n", Differenz);
    printf("Das Produkt der Zahlen 1567 und 367 ist %d\n", Produkt);
    printf("Der Quotient der Zahlen 1567 und 367 ist %d\t\t(Ganzzahldivision)\n", Quotient);
    printf("Die Division der Zahlen 1567 und 367 ist %d, Rest %d\t(Ganzzahldivision mit Rest)\n", Quotient, Rest);
    //Teilaufgabe 2
    printf("Die Division der Zahlen 1567 und 367 ist %f\t(Fliesskommazahldivision)\n", Divisionf);
    return 0;
}