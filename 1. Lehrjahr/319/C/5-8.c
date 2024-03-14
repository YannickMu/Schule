/*
Aufgabe     5-8
Datum       21.11.23
Autor       Yannick Mueller
*/

#include <stdio.h>
#include <math.h>

int main()
{
    //Deklaration
    int jahr;
    int istSchaltJahr;

    //Eingabe
    printf("Bitte geben sie das Jahr ein: ");
    scanf("%d", &jahr);
    
    //Verarbeitung
    switch (jahr % 4)
    {
    case 0:
        switch (jahr % 100)
        {
        case 0:
            switch (jahr % 400)
            {
                case 0:
                    istSchaltJahr = 1;
                    break;
                        
                default:
                    istSchaltJahr = 0;
                    break;
            }
            break;
                
        default:
            istSchaltJahr = 1;
            break;
        }
        break;
        
    default:
        istSchaltJahr = 0;
        break;
    }
    

    //Ausgabe
    switch (istSchaltJahr)
    {
        case 0:
            printf("%d ist kein Schaltjahr", jahr); 
            break;
        
        default:
            printf("%d ist ein Schaltjahr", jahr); 
            break;
        }


    return 0;
}