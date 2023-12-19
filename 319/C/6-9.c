/*
Aufgabe: 6-9
Datum: 19.12.2023
Autor: Yannick Müller
*/

#include <stdio.h>
#include <math.h>

int main()
{
    //Deklaration
    float note;
    float summenoten = 0;
    int i = 1;
    int nochmal;
    //Eingabe, Verarbeitung & Ausgabe
    do {
        do {
            //Eingabe
            printf("Geben sie die %d. Note ein (1-6) 0 = Ende:", i);
            scanf("%f", &note);
            //Verarbeitung
            if (note > 6) {
                printf("Die Note darf nicht groesser als 6 sein.");
                return 345;
            } else {
                summenoten += note;
                i++;
            }
        } while (note != 0);
        printf("Der Durchschnitt der %d Noten ist: %.2f\n", i - 2, summenoten / (i - 2));
        printf("Moechtest du noch einen Durchschnitt berechnen (1=Ja, 0=Nein):");
        scanf("%d", &nochmal);
    } while (nochmal != 0);
    return 0;
}