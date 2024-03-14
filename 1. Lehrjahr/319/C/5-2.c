/*
Aufgabe: 5-2, Selektion: Bedingte Anweisungen mit if: Fahrprüfung
Datum: 7.11.2023
Autor: Yannick Müller
*/

#include <stdio.h>
#include <math.h>

int main() {
    //Deklaration:
    int alter;
    int warten;
    //Eingabe:
    printf("Fahrpruefung\n");
    printf("---------------------------------------------\n");
    printf("Geben sie Ihr Alter ein: \n");
    scanf("%d", &alter);
    //Verarbeitung:
    if (alter < 18 && alter >= 0){
        warten = 18 - alter;
        //Ausgabe:
        printf("Sie muessen noch %d Jahre warten.\n\n", warten);
        printf("Sie sind dieses Jahr nicht 18 geworden.\n");
    } else if (alter > 18){
        warten = alter -18;
        //Ausgabe:
        printf("Sie sind %d und duerfen seit %d Jahren Auto fahren.\n", alter, warten);
    } else if (alter == 18){
        //Ausgabe:
        printf("Herzlichen Glückwunsch, Sie sind dieses Jahr 18 geworden und duerfen nun die Fahrpruefung ablegen.\n");
    } else {
        //Ausgabe:
        printf("Ungueltiges Alter.");
        return 1;
    }
    printf("---------------------------------------------");
    return 0;
}
