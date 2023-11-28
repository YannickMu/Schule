/*
Aufgabe: 6-3, while: Zusatzaufgabe
Datum: 28.11.2023
Autor: Yannick Müller
*/

#include <stdio.h>

int main()
{
    //Deklaration
    unsigned long int zahl;
    unsigned long int i;
    //Eingabe
    zahl = 3;
    i = zahl;
    //Verarbeitung & Ausgabe
    while (1==1) {
        while (zahl > 1)
        {
            printf("%lu ", zahl);
            if (i % 2 == 0) {
                zahl /= 2;
            } else {
                zahl = zahl * 3 + 1;
            }
        }
        if (zahl != 2)
        {
            printf("\n\n%lu\n", i);
            return 0;
        }
        i++;
        zahl = i;
    }
    return 0;
}