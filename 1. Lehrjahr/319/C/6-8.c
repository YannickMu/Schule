/*
Aufgabe: 6-8
Datum: 19.12.2023
Autor: Yannick Müller
*/

#include <stdio.h>
#include <math.h>

int main()
{
    //Deklaration
    double summe;
    double zahl;
    int wiederholung;
    //Eingabe
    printf("Wie viele Zahlen wollen sie addieren:");
    scanf("%d", &wiederholung);
    //Verarbeitung
    for (int i = 0; i < wiederholung; i ++){
        printf("Geben sie die %d. Zahl ein:", i+1);
        scanf("%lf", &zahl);
        summe += zahl;
    }
    //Ausgabe
    printf("Die Summe der %d Zahlen ist: %.3lf", wiederholung, summe);
    return 0;
}