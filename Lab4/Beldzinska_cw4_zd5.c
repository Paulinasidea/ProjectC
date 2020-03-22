#include <stdio.h>

int main()
{
    int kwota;
    printf("Witaj w bankomacie Euronet wpisz kwote, która chcesz wypłacic:\n");
    scanf("%d", &kwota);
    int Banknoty[] ={500,200,100,50,20,10};

    if (kwota >= 0) {
        for(int i= 0;i<6;){
            int reszta = kwota - Banknoty[i];
            if (reszta>=0){
                printf("%d\n", Banknoty[i]);
                kwota = kwota -Banknoty[i];
                continue;
            }

            else{
                if(i == 5 &&kwota>0){
                    printf("Upss.. Bankomat nie jest w stanie wypłacić rządanej kwoty:(\n");
                    break;
                }
                else{i++;}
            }

        }
    }
    return 0;
}
