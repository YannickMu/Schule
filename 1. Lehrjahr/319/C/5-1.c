/*
Aufgabe: 5-1, Selektion mit if .. else ..: Wurzel berechnen
Datum: 7.11.2023
Autor: Yannick Müller
*/

#include <stdio.h>
#include <math.h>

int main() {
    //Deklaration:
    float eingabe;
    float wurzel;
    //Eingabe:
    printf("Geben sie eine Zahl ein: \n");
    scanf("%f", &eingabe);
    //Verarbeitung:
    if (eingabe >= 0){
        wurzel = sqrt(eingabe);
        //Ausgabe:
        printf("Die Wurzel von %f ist %f.\n", eingabe, wurzel);
    } else {
        //Ausgabe:
        printf("%f ist negativ. Wurzel berechnen geht nicht.\n", eingabe);
    }
    printf("Programmende\n");
    return 0;
}
