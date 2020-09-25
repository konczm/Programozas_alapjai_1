#include<stdio.h>
#include<math.h>

int main(void){
    int szam;
    printf("Írj be egy számot: ");
    while (scanf("%d",&szam) > 0){
        if(szam % 2 != 0)
            printf("Páratlan, négyzete: %.2f\n",pow(szam, 2) );
        else
            printf("Páros, x^12: %.2f\n",pow(szam, 12) );
        
        printf("Írj be egy számot: ");
    }
}