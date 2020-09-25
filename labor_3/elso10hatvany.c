#include<stdio.h>
#include<math.h>

int main(void){
    double szam;
    printf("Írj be egy számot: ");
    while (scanf("%lf",&szam) > 0){
        for (int i = 1; i <= 10; i++)
            printf("%d. hatványa: %.6f\n",i,pow(szam, i) );
        
        printf("Írj be egy számot: ");
    }
}