#include<stdio.h>

/*
    liczba pierwsza podzielna przez 1)sama siebie 2)przez jeden
    przykład :zakres <3,5>
                iterator i -> przechodzi po kolejnych liczbach
                iterator c -> dla konkretnej iteracji i przechodzi <2,i>
                pomijam jedynke poniewaz ten warunek bedzie zawsze spełniony sprawdzam czy jest
                podzielny przez kolejne jesli iterator c osiągnie wartość wypisujemy go na ekranie

*/

int main(){
    int   c,poczatek,koniec;

    printf("Z jakiego przedziału mam wypisac liczby pierwsze?:\n");
    scanf("%d", &poczatek);
    scanf("%d", &koniec);
    int i = poczatek; //zaczynamy od poczatku :)
    printf("Wynik działania programu:\n");
    while(i>=poczatek && i<=koniec){ // sprawdza czy kolejna liczba jest w podanym zakresie
        for (c = 2; c <= i; c++)

        {
            if (i%c == 0&& c != i)
                break;
            else if(c == i) printf("%d\n", i);
            else continue; //kontynuuje działanie programu gdy liczba nie bedzie podzielna przez c
        }

        i++;
    }
}

