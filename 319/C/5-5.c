/*
Aufgabe: 5-5: Verschachtelte if-Statements
Datum: 14.11.2023
Autor: Yannick Müller
*/

#include <stdio.h>

int main()
{
    //Deklaration:
    float zahl1;
    float zahl2;
    float zahl3;
    //Eingabe:
    printf("Verschachtelte if-Statements\n");
    printf("---------------------------------------------\n");
    printf("Zahl 1: \n");
    scanf("%f", &zahl1);
    printf("Zahl 2: \n");
    scanf("%f", &zahl2);
    printf("Zahl 3: \n");
    scanf("%f", &zahl3);
    //Verarbeitung:
    if (zahl1 > zahl2 && zahl1 > zahl3)
    {
        //Ausgabe:
        printf("Die erste Zahl ist mit dem Wert %f die groesste Zahl.\n", zahl1);
    }
    else if (zahl2 > zahl1 && zahl2 > zahl3)
        {
            //Ausgabe:
            printf("Die zweite Zahl ist mit dem Wert %f die groesste Zahl.\n", zahl2);
        }
        else if (zahl3 > zahl1 && zahl3 > zahl2)
            {
                //Ausgabe:
                printf("Die dritte Zahl ist mit dem Wert %f die groesste Zahl.\n", zahl3);
            }
            else if (zahl1 == zahl2 && zahl1 == zahl3)
                {
                    //Ausgabe:
                    printf("Alle Zahlen haben den gleichen Wert (%f).\n", zahl3);
                }
                else if (zahl1 == zahl2 && zahl1 > zahl3)
                    {
                        //Ausgabe:
                        printf("Die erste und zweite Zahl sind mit dem Wert %f die groessten Zahlen.\n", zahl1);
                    }
                    else if (zahl1 == zahl3 && zahl1 > zahl2)
                        {
                            //Ausgabe:
                            printf("Die erste und dritte Zahl sind mit dem Wert %f die groessten Zahlen.\n", zahl1);
                        }
                        else if (zahl2 == zahl3 && zahl1 < zahl2)
                            {
                                //Ausgabe:
                                printf("Die zweite und dritte Zahl sind mit dem Wert %f die groessten Zahlen.\n", zahl2);
                            }
    printf("---------------------------------------------");
    return 0;
}
