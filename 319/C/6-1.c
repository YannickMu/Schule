/*
Aufgabe: 6-1, while: Wurzel berechnen
Datum: 28.11.2023
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
    while (eingabe < 0)
    {
        printf("Das berechnen einer Wurzel aus negativen Zahlen ist nicht erlaubt.\n");
        printf("Geben sie eine gültige Zahl ein: \n");
        scanf("%f", &eingabe);
    }
    //Verarbeitung:
    wurzel = sqrt(eingabe);
    printf("Die Wurzel von %f ist %f.\n", eingabe, wurzel);
    printf("Programmende\n");
    return 0;
}
