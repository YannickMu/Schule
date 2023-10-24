/*
Aufgabe: 4-7, Dateneingabe
Datum: 26.09.2023
Autor: Yannick Müller
*/

#include <stdio.h>

int main(){
    //Deklaration
    double Zahl1;
    double Zahl2;
    int Zahli1;
    int Zahli2;
    double Summe;
    double Differenz;
    double Multiplikation;
    int DivisionI;
    int Modulo;
    double Division;
    //Teilaufgabe 1
    printf("Aufgabenstellung 1:\n-------------------\n");
    //Eingabe
    printf("Geben sie eine Zahl ein:\t");
    scanf("%lf", &Zahl1);
    printf("\nGeben sie eine weitere Zahl ein:\t");
    scanf("%lf", &Zahl2);
    //Verarbeitung
    Summe = Zahl1 +  Zahl2;
    //Ausgabe
    printf("\n\nDie Summe der beiden Zahlen ist %f.", Summe);

    //Teilaufgabe 2
    printf("\n\nAufgabenstellung 2:\n-------------------\n");
    //Verarbeitung
    Zahli1 = Zahl1;
    Zahli2 = Zahl2;
    Differenz = Zahl1 - Zahl2;
    Multiplikation = Zahl1 * Zahl2;
    DivisionI = Zahli1 / Zahli2;
    Modulo = Zahli1 / Zahli2;
    Division = Zahl1 / Zahl2;
    //Ausgabe
    printf("\nDie Subtraktion der beiden Zahlen ist %f.", Differenz);
    printf("\nDie Multiplikation der beiden Zahlen ist %f.", Multiplikation);
    printf("\nDie Ganzzahldivisio der beiden Zahlen ist %d und der Rest ist %d.", DivisionI, Modulo);
    printf("\nDie Fliesskommazahl der beiden Zahlen ist %f.\n", Division);
    return 0;
}