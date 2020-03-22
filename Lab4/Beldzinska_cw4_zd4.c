#include <stdio.h>

int main()
{
    int BokA,BokB;
    char c;
    printf("Wybierz znak: \n");
    scanf("%c",&c);
    printf("Podaj wymiary prostokata: \n");
    scanf("%d",&BokA);
    scanf("%d",&BokB);
    printf("Twój wymarzony prostokąt\n");
    for (int i =0;i<BokB;++i){
        printf("%c",c);
        if((i == 0)||(i ==BokB-1)){
            for(int j =0; j<BokA-1;++j) printf("%c",c);
            printf("\n");
        }else{
            for(int j=0;j<BokA-1;++j) {
                if(j<BokA-2)printf(" ");
                else printf("%c ",c);
            }
            printf("\n");
        }

    }
    return 0;
}

