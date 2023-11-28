/*
Aufgabe: 6-2, while: Schleifen Variablen
Datum: 28.11.2023
Autor: Yannick Müller
*/

#include <stdio.h>

int main()
{
    //Deklaration
    float reihe;
    int i = 1;
    //Eingabe
    printf("Geben sie eine Zahl ein:\n");
    scanf("%f", &reihe);
    //Verarbeitung & Ausgabe
    printf("Die %f-Reihe lautet:\n-----------------------\n", reihe);
    while (i <= 10)
    {
        printf("%d * %f = %f\n", i, reihe, i*reihe);
        i += 1;
    }
    printf("-----------------------\n");
}