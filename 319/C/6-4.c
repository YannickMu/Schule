/*
Aufgabe: 6-4
Datum: 12.12.2023
Autor: Yannick Müller
*/

#include <stdio.h>
#include <math.h>

int main()
{
    //Deklaration & Eingabe
    float ende;
    float celsius = -20;//Deklaration & Initialisierung der Schleifenvariable
    float fahreinheit;
    printf("Geben sie die Untergrenze ein:");
    scanf("%f", &celsius);
    printf("\nGeben sie die Obergrenze ein:");
    scanf("%f", &ende);
    //Verarbeitung & Ausgabe
    if (celsius > ende)
    {
        printf("Die Obergrenze darf nicht kleiner als die Untergrenze sein.");
        return 2143;
    }
    else{
        while (celsius <= ende) //Solange Schleifenvariable Bedingung erfüllt
        {
            fahreinheit = celsius * (9/5.0) + 32;
            printf("%f\tCelsius\t= %f\tFahreinheit\n", celsius, fahreinheit);
            celsius ++;//Reinitialisierung der Schleifenvariable
        }
        return 0;
    }
}