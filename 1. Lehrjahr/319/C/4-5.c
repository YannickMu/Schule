/*
Aufgabe: 4-5, Zuweisungsoperatoren
Datum: 26.09.2023
Autor: Yannick Müller
*/

#include <stdio.h>

    //Eingabe
    char a = 0;
    char b = 3;
    char r = 1;
    char s = 2;

int main(){
    //Teilaufgabe 1
    //Verarbeitung & Ausgabe
    printf("--------------------------------------------\n");
    printf("-------- Start mit a = 0 und b = 3 ---------\n");
    printf("--------------------------------------------\n\n");
    printf("Zuweisungsoperator: =\n");
    printf("---------------------\n");
    a = a + b;
    printf("a = a + b: a hat nun den Wert %d.\n", a);
    a = a + b;
    printf("a = a + b: a hat nun den Wert %d.\n\n", a);
    //Teilaufgabe 2
    //Verarbeitung & Ausgabe
    printf("Zuweisungsoperator: +=\n");
    printf("---------------------\n");
    a += b;
    printf("a += b: a hat nun den Wert %d.\n", a);
    a += b;
    printf("a += b: a hat nun den Wert %d.\n\n", a);
    //Teilaufgabe 3
    //Verarbeitung & Ausgabe
    printf("--------------------------------------------\n");
    printf("-------- Start mit r = 1 und s = 2 ---------\n");
    printf("--------------------------------------------\n\n");
    printf("Zuweisungsoperator: =\n");
    printf("---------------------\n");
    r = r * s;
    printf("r = r * s: r hat nun den Wert %d.\n", r);
    r = r * s;
    printf("r = r * s: r hat nun den Wert %d.\n\n", r);
    //Verarbeitung & Ausgabe
    printf("Zuweisungsoperator: +=\n");
    printf("---------------------\n");
    r *= s;
    printf("r *= s: r hat nun den Wert %d.\n", r);
    r *= s;
    printf("r *= s: r hat nun den Wert %d.\n\n", r);
    return 0;
}