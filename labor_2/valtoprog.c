#include <stdio.h>

int main(void){
    printf("Hany forint? ");
    double huf;
    scanf("%lf", &huf);

    printf("%.2f EUR", (huf/360.0));

}