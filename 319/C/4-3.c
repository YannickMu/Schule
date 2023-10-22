/*
Aufgabe: 4-3, Berechnung Woche und Wochentag
Datum: 19.09.2023
Autor: Yannick Müller
*/

#include <stdio.h>

int main(){
    int Tag;
    int Woche;
    int Wochentag;
    printf("Berechnung Woche und Wochentag\n----------------------------------------------------------------------------------------------------------------\n");
    printf("Geben sie Ihren Wunschtag als Zahl ein.\t");
    scanf("%d",&Tag);
    Woche = Tag / 7;
    Wochentag = Tag % 7;
    if (Wochentag == 0) {
        printf("Ihr Tag befidet sich in der Woche %d. es ist ein Sonntag.", Woche);
    } else if (Wochentag == 1)
    {
        printf("Ihr Tag befidet sich in der Woche %d. es ist ein Montag.", Woche);
    }else if (Wochentag == 2)
    {
        printf("Ihr Tag befidet sich in der Woche %d. es ist ein Dienstag.", Woche);
    }else if (Wochentag == 3)
    {
        printf("Ihr Tag befidet sich in der Woche %d. es ist ein Mittwoch.", Woche);
    }else if (Wochentag == 4)
    {
        printf("Ihr Tag befidet sich in der Woche %d. es ist ein Donnerstag.", Woche);
    }else if (Wochentag == 5)
    {
        printf("Ihr Tag befidet sich in der Woche %d. es ist ein Freitag.", Woche);
    }else{
        printf("Ihr Tag befidet sich in der Woche %d. es ist ein Samstag.", Woche);
    }
       
    return 0;
}