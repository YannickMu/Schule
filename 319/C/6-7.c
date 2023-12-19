/*
Aufgabe: 6-7
Datum: 19.12.2023
Autor: Yannick Müller
*/

#include <stdio.h>
#include <math.h>

int main()
{
    //Deklaration
    int auswahl = 3;
    double fahreinheit;
    double celsius;
    //Eingabe, Verarbeitung & Ausgabe
    do {
        //Eingabe
        printf("##############################\n#\t    Menu\t     #\n------------------------------\n");
        printf("# Celsius -> Fahreinheit = 1 #\n# Fahreinheit -> Celsius = 2 #\n#\t\t    Ende = 0 #\n##############################\n\n");
        scanf("%d", &auswahl);
        //Verarbeitung
        switch (auswahl) {
            case 1:
                printf("Welche Temperatur wollen sie in Fahreinheit umrechnen? ");
                scanf("%lf", &celsius);
                fahreinheit = celsius * (9/5.0) + 32;
                printf("Die Temperatur %.2lf Grad Celsius ist %.2lf Grad Fahreinheit.\n", celsius, fahreinheit);
                break;
            case 2:
                printf("Welche Temperatur wollen sie in Celsius umrechnen? ");
                scanf("%lf", &fahreinheit);
                celsius = (5.0/9) * ( fahreinheit - 32);
                printf("Die Temperatur %.2lf Grad Fahreinheit ist %.2lf Grad Celsius.\n", fahreinheit, celsius);
                break;
            case 0:
                printf("ByeBye...");
                return 0;
            default:
                printf("Ungueltige eingabe, %d ist keine Option.", auswahl);
                return 404;
        }
    } while (auswahl != 0);
    
    return 0;
}