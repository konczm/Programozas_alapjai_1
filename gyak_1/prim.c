#include <stdio.h>
#include <math.h>

int main(void){
    int szam,prime=1;
    printf("Írj be egy számot: ");
    scanf("%d", &szam);

    if(szam !=2 || szam % 2 != 0 ){
        for (int i = 3; i <= (int)sqrt(szam); i+=2)
            if (szam % i == 0){
                prime = 0;
                break;
            }
    }
    else
        prime = 0;

    if (prime == 0)
        printf("Nem prím!");
    else
        printf("Prím szám!");
        
    return 0;
}