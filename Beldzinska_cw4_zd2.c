#include <stdio.h>
#define PI  3.14

int main()
{
    int wybor_menu, promien,bokA,bokB,wynik_pola, wynik_obwod;
    char x;


    do
        {
        printf("Wzory na pole powierzchni/obwod:\n"
               "1.koła -> pi*r^2/2*PI*r\n"
               "2.prostokata -> a*b/2*a+2*b\n"
               "3.kwadrat -> a*a/4*a\n");

        scanf("%d",&wybor_menu);
        switch (wybor_menu) {
        case 1:
            printf("Podaj promien: \n");
            scanf("%d",&promien);
            wynik_pola = PI*promien*promien;
            wynik_obwod = 2*PI*promien;
            printf("Pole powierzchni = %d\n"
                   "Obwod kola = %d\n",wynik_pola,wynik_obwod);
            break;
        case 2:
            printf("Podaj boki:\n");
            scanf("%d",&bokA);
            scanf("%d",&bokB);
            wynik_pola = bokA*bokB ;
            wynik_obwod= 2*bokA + 2*bokB;
            printf("Pole powierzchni = %d\n"
                   "Obwod prostokata = %d\n",wynik_pola,wynik_obwod);
            break;
        case 3:
            printf("Podaj bok:\n");
            scanf("%d",&bokA);
            wynik_pola = bokA*bokA ;
            wynik_obwod = 4*bokA;
            printf("Pole powierzchni = %d\n"
                   "Obwod kwadratu = %d\n",wynik_pola,wynik_obwod);
            break;

        default:
            break;

        }
        printf("Czy chcesz powtorzyc program?(t/n)\n");
        scanf("%c",&x);
        //x = getchar();
        } while( x == 't' );
        printf( "Koniec Programu\n" );
    return 0;
}

