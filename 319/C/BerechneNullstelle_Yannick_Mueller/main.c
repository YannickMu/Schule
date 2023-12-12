/*
Aufgabe: 6-4
Datum: 12.12.2023
Autor: Yannick Müller
Version 1
*/

#include <stdio.h>
#include <math.h>

int main()
{
    //Deklaration
    double a;
    double b;
    double c;
    double diskriminante;
    double x1;
    double x2;
    //Eingabe
    printf("------------------------------------------\nBerechnung der Nullstelle einer Parable\n------------------------------------------\n\n");
    printf("Geben sie bitte die Parameter ein.\nDer Parameter a darf nicht gleich 0 sein!\n\n");
    printf("Parameter a = ");
    scanf("%lf", &a);
    printf("\n");
    printf("Parameter b = ");
    scanf("%lf", &b);
    printf("\n");
    printf("Parameter c = ");
    scanf("%lf", &c);
    printf("\n\n");
    //Verarbeitung & Ausgabe
    if (a == 0)
    {
        printf("Der Parameter a hat den Wert 0, er muss jedoch ungleich 0 sein!");
        return 200;
    }
    else
    {
        diskriminante = pow(b, 2.0) - 4 * a * c;
        if (diskriminante > 0)
        {
            printf("Die Diskriminante hat den Wert D=%.3lf\nDiese Parabel hat zwei Loesungen:\n", diskriminante);
            x1 = ((-1)*b + sqrt(pow(b, 2.0) -4 * a * c)) / (2*a);
            x2 = ((-1)*b - sqrt(pow(b, 2.0) -4 * a * c)) / (2*a);
            printf("x1 = %.3lf\nx2 = %.3lf\n", x1, x2);
            return 0;
        }
        else if (diskriminante == 0)
        {
            printf("Die Diskriminante hat den Wert D=%.3lf\nDiese Parabel hat eine Loesung:\n", diskriminante);
            x1 = ((-1)*b) / 2 * a;
            printf("x1 = %.3lf\n", x1);
            return 0;
        }
            else
            {
                printf("Die Diskriminante hat den Wert D=%.3lf\nDiese Parabel hat keine Loesung:", diskriminante);
                return 0;
            }
    }
}