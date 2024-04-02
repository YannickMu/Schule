/*
Aufgabe: 5-4: Franken Rappen Vergleich
Datum: 7.11.2023
Autor: Yannick Müller
*/

#include <stdio.h>

int main() {
    //Deklaration:
    int Franken1;
    int Franken2;
    int Rappen1;
    int Rappen2;
    //Eingabe:
    printf("Franken Rappen Vergleich\n");
    printf("---------------------------------------------\n");
    printf("Geben sie die Anzahl Franken des ersten Betrages ein: \n");
    scanf("%d", &Franken1);
    printf("Geben sie die Anzahl Rappen des ersten Betrages ein: \n");
    scanf("%d", &Rappen1);
    printf("Geben sie die Anzahl Franken des zweiten Betrages ein: \n");
    scanf("%d", &Franken2);
    printf("Geben sie die Anzahl Rappen des zweiten Betrages ein: \n");
    scanf("%d", &Rappen2);
    //Verarbeitung:
    if (Franken1 != Franken2){
        if (Franken1 > Franken2){
            //Ausgabe:
            printf("Der erste Betrag ist groesser als der zweite Betrag.\n");
        } else {
            //Ausgabe:
            printf("Der erste Betrag ist kleiner als der zweite Betrag.\n");
        }
    } else if (Rappen1 != Rappen2){
        if (Rappen1 > Rappen2){
            //Ausgabe:
            printf("Der erste Betrag ist groesser als der zweite Betrag.\n");
        } else {
            //Ausgabe:
            printf("Der erste Betrag ist kleiner als der zweite Betrag.\n");
        }
    } else {
        //Ausgabe:
        printf("Die beiden Betraege sind gleich gross.\n");
    }
    printf("---------------------------------------------");
    return 0;
}
