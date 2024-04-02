/*
Aufgabe: 3-2, Datentypen & Wertbereiche
Datum: 12.09.2023
Autor: Yannick Müller
*/
#include<stdio.h>

char c = 100;
short s = 1000;
int i = 100000;
float f = 3.14;
double d = 1.23456789;

int main(){
    //Teilaufgabe 1
    printf("1. Aufgabenstellung: Wertausgabe\n----------------------------------------------------\n");
    printf("Der Wert der char-Variable: \t%d\n", c);
    printf("Der Wert der short-Variable: \t%d\n", s);
    printf("Der Wert der int-Variable: \t%d\n", i);
    printf("Der Wert der float-Variable: \t%.6f\n", f);
    printf("Der Wert der double-Variable: \t%.8f\n\n", d);
    //Teilaufgabe 2
    printf("2. Aufgabenstellung: Speicherbedarf\n----------------------------------------------------\n");
    printf("Der Speicherbedarf der char-Variable: \t%d Byte\n", sizeof(c));
    printf("Der Speicherbedarf der short-Variable: \t%d Byte\n", sizeof(s));
    printf("Der Speicherbedarf der int-Variable: \t%d Byte\n", sizeof(i));
    printf("Der Speicherbedarf der float-Variable: \t%d Byte\n", sizeof(f));
    printf("Der Speicherbedarf der double-Variable:\t%d Byte\n\n", sizeof(d));
    //Teilaufgabe 3
    c = 300;
    s = 50000;
    i = 3000000000;
    printf("3. Aufgabenstellung: Überschreiten der Wertbereiche\n----------------------------------------------------\n");
    printf("300 als char-Datentyp: \t\t%d\n", c);
    printf("50'000 als short-Datentyp: \t%d\n", s);
    printf("3'000'000'000 als int-Datentyp: %d\n\n", i);
    //Teilaufgabe 4
    const float pifloat = 3.14159265359;
    const double pidouble = 3.14159265359;
    printf("4. Aufgabenstellung: Pi auf 11 Nachkommastellen\n----------------------------------------------------\n");
    printf("Der Wert pi als float-Datentyp:\t\t%.11f\n", pifloat);
    printf("Der Wert pi als double-Datentyp:\t%.11f\n\n", pidouble);
}