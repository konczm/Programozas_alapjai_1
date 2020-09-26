#include <stdio.h>

int main(void){

    int szam, index=0;
    int pozitivak[100];

    do{
        scanf("%d",&szam);
        if(szam > 0){
            pozitivak[index] = szam;
            index++;
        }
    }while ( szam != 0 );

      for (int i = index-1; i >= 0; i--)
        printf("%d ",pozitivak[i]);

    return 0;
}