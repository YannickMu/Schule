/*
Aufgabe: 6-6
Datum: 12.12.2023
Autor: Yannick Müller
*/

#include <stdio.h>
#include <math.h>

int main()
{
    //Deklaration
    char ende = 0;
    float celsius = -20;//Deklaration & Initialisierung der Schleifenvariable
    float fahreinheit;
    //Eingabe & Verarbeitung & Ausgabe
    do
    {
        printf("Geben sie die Temperatur in Celsius ein:");
        scanf("%f", &celsius);
        fahreinheit = celsius * (9/5.0) + 32;
        printf("%f\tCelsius\t= %f\tFahreinheit\n", celsius, fahreinheit);
        printf("Wollen sie noch eine Temperatur umrechnen? j=1/n=0");
        scanf("%d", &ende);
    } while (ende == 1);
    return 0;
}