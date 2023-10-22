/*
Aufgabe: 4-6, Der Char-Datentyp
Datum: 26.09.2023
Autor: Yannick Müller
*/

#include <stdio.h>

    //Eingabe
    char ascii = 65;

int main(){
    printf("Buchstabe\t|\tAscii\n");
    printf("----------------|-------------\n");
    while (ascii < 91)
    {
        printf("%c\t\t|\t%d\n", ascii, ascii);
        ascii += 1;
    }
    return 0;
}