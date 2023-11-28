//
// Created by Yannick Mueller on 27.11.2023.
//

#include <stdio.h>

int main()
{
    //Deklaration
    char boot1[30] = "-1- Boot up PC 1";
    char boot2[30] = "-2- Boot up PC 2";
    char activateprinter[30] = "-3- Activate printer";
    char makeCoffee[30] = "-4- Make Coffee";
    char afterWork[30] = "-5- After work hour";
    char choice;
    //Eingabe
    printf("+-------- Menu ---------+\n| %s\t|\n| %s\t|\n| %s\t|\n| %s\t|\n| %s\t|\n+-----------------------+\nChose one:\n", boot1, boot2, activateprinter, makeCoffee, afterWork);
    scanf("%d", &choice);
    //Verarbeitung
    switch (choice) {
        case 1:
            //Ausgabe
            printf("Booting up PC1 ...");
            break;
        case 2:
            //Ausgabe
            printf("Booting up PC2 ...");
            break;
        case 3:
            //Ausgabe
            printf("Activating printer ...");
            break;
        case 4:
            //Ausgabe
            printf("Making coffee ...");
            break;
        case 5:
            //Ausgbe
            printf("Yess, have a nice evening ...");
            break;
        default:
            //Ausgabe
            printf("Input nicht Gültig (nur Zahl eingeben)");
            break;
    }
    return 0;
}