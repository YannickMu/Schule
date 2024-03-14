/*
Aufgabe: 5-6: Verschachtelte if-Statements
Datum: 14.11.2023
Autor: Yannick Müller
*/

#include <stdio.h>

int main()
{
    //Deklaration:
    int jahr;
    //Eingabe:
    printf("Verschachtelte if-Statements\n");
    printf("---------------------------------------------\n");
    printf("Jahr: \n");
    scanf("%d", &jahr);
    //Verarbeitung:
    if (jahr % 4 == 0)
    {
        if (jahr % 100 == 0)
        {
            if (jahr % 400 == 0)
            {
                printf("%d ist ein Schaltjahr.\n", jahr);
            }
            else
            {
                printf("%d ist kein Schaltjahr.\n", jahr);
            }
        }
        else
        {
            printf("%d ist ein Schaltjahr.\n", jahr);
        }
    }
    else
    {
        printf("%d ist kein Schaltjahr.\n", jahr);
    }
    printf("---------------------------------------------");
    return 0;
}
