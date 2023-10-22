/*
Aufgabe: 3-3, Datentypen wählen, Wetebereich, Speicherbedarf
Datum: 12.09.2023
Autor: Yannick Müller
*/
#include<stdio.h>

int zahl1 = 105344;
short zahl2 = -155;
float zahl3 = 2.71;
short zahl4 = 31072;
char zahl5 = 8;
double zahl6 = 134997.1234;
float zahl7 = 34.677;

int main(){
   printf("Richtige Datentypen finden\n------------------------------------------------------------------\n");
   printf("Zahl1:\t%d\t\tDatentyp: int\t\tSpeicherbedarf:\t%d\n", zahl1, sizeof(zahl1));
   printf("Zahl2:\t%d\t\tDatentyp: short\t\tSpeicherbedarf:\t%d\n", zahl2, sizeof(zahl2));
   printf("Zahl3:\t%d\tDatentyp: float\t\tSpeicherbedarf:\t%d\n", zahl3, sizeof(zahl3));
   printf("Zahl4:\t%d\t\tDatentyp: short\t\tSpeicherbedarf:\t%d\n", zahl4, sizeof(zahl4));
   printf("Zahl5:\t%d\t\tDatentyp: char\t\tSpeicherbedarf:\t%d\n", zahl5, sizeof(zahl5));
   printf("Zahl6:\t%d\tDatentyp: double\tSpeicherbedarf:\t%d\n", zahl6, sizeof(zahl6));
   printf("Zahl7:\t%d\tDatentyp: float\t\tSpeicherbedarf:\t%d\n", zahl7, sizeof(zahl7));
   printf("------------------------------------------------------------------\n");
}