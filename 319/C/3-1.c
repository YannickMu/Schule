/*
Aufgabe: 3-1, Deklaration, Initialisierung & Wertzuweisung
Datum: 12.09.2023
Autor: Yannick Müller
*/
#include<stdio.h> 
int eZahl = 10;
int zZahl = 20;
float efZahl = 1.403849972947588;
float zfZahl = 2.879347292745789;

int main(){
    //Teilaufgabe 1
    printf("Der Wert der ersten Zahl ist: %d\n", eZahl);
    printf("Der Wert der zweiten Zahl ist: %d\n", zZahl);
    //Teilaufgabe 2
    eZahl = 30;
    zZahl = 40;
    printf("Der neue Wert der ersten Zahl ist: %d\n", eZahl);
    printf("Der neue Wert der zweiten Zahl ist: %d\n", zZahl);
    //Teilaufgabe 3
    printf("Der Wert der ersten Zahl ist: %.9f\n", efZahl);
    printf("Der Wert der zweiten Zahl ist: %.9f\n", zfZahl);
    efZahl = 3.2983479872934;
    zfZahl = 4.9287459872984;
    printf("Der neue Wert der ersten Zahl ist: %.9f\n", efZahl);
    printf("Der neue Wert der zweiten Zahl ist: %.9f\n", zfZahl);
}