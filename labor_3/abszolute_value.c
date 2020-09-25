#include<stdio.h>
#include<math.h>

int main(void){
    double szam;
    printf("Írj be egy számot: ");
    while (scanf("%lf",&szam) > 0){
        if (szam > 0)
            printf("If-el: %f\n",(szam*1.0));
        else
            printf("If-el: %f\n",(szam*(-1.0)));
        
        printf("Függvénnyel: %f\n",fabsf(szam));

        printf("Írj be egy számot: ");
    }
}