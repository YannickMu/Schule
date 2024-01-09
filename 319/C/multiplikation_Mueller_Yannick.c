/*
Aufgabe: Prüfung Modul 319 III Programmieraufgabe "Potenzen"
Datum: 09.01.2024
Autor: Yannick Mueller
*/

#include <stdio.h>

int main()
{
    //Deklaration
    int mal;
    float zahl;
    float eingabe;
    //Eingabe
    printf("Multiplikation\n");
    printf("----------------------------------------------------------------\n\n");
    do
    {
        printf("Geben Sie den Multiplikator (0=Ende ansonsten >=0) ein: ");
        scanf("%d", &mal);
        if (mal < 0)
        {
            printf("-> Der Wert muss groesser gleich 0 sein.\n");
        }
        if (mal == 0)
        {
            return -1;
        }     
    } while (mal < 0);
    printf("Geben Sie den Multiplikand ein: ");
    scanf("%f", &zahl);
    //Verarbeitung
    eingabe = zahl;
    for (int i = 0; i < mal-1; i++)
    {
        zahl += eingabe;
    }
    //Ausgabe
    printf("\n----------------------------------------------------------------");
    printf("\n%d x %.4f = %.4f", mal, eingabe, zahl);
    printf("\n----------------------------------------------------------------\n");
    return 0;
}