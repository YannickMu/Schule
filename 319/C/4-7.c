/*
Aufgabe: 4-7, Dateneingabe
Datum: 26.09.2023
Autor: Yannick Müller
*/

#include <stdio.h>
double Zahl1;
double Zahl2;

int main(){
    //Teilaufgabe 1
    printf("Aufgabenstellung 1:\n-------------------\n");
    printf("Geben sie eine Zahl ein:\t");
    scanf("%lf", &Zahl1);
    printf("\nGeben sie eine weitere Zahl ein:\t");
    scanf("%lf", &Zahl2);
    printf("\n\nDie Summe der beiden Zahlen ist %f.", Zahl1 + Zahl2);

    //Teilaufgabe 2
    int Zahli1 = Zahl1;
    int Zahli2 = Zahl2;
    printf("\n\nAufgabenstellung 2:\n-------------------\n");
    printf("\nDie Subtraktion der beiden Zahlen ist %f.", Zahl1 - Zahl2);
    printf("\nDie Multiplikation der beiden Zahlen ist %f.", Zahl1 * Zahl2);
    printf("\nDie Ganzzahldivisio der beiden Zahlen ist %d und der Rest ist %d.", Zahli1 / Zahli2, Zahli1 % Zahli2);
    printf("\nDie Fliesskommazahl der beiden Zahlen ist %f.\n", Zahl1 / Zahl2);
    return 0;
}