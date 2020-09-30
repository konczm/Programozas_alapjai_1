#include <stdio.h>

int main(){

    int szamsor[10];

    for (int i = 0; i < 10; i++)
        scanf("%d",&szamsor[i]);

    int szulev;
    if(szamsor[0] > 3 )
        szulev= 1900 + szamsor[1] * 10 + szamsor[2];
    else
        szulev= 2000 + szamsor[1] * 10 + szamsor[2];

    int osszeg = 0;

    if(szulev < 1997)
        for (int i = 0; i < 10; i++)
            osszeg+= szamsor[i] * (i+1);
    else
        for (int i = 0; i < 10; i++)
            osszeg+= szamsor[i] * (10-i);
    printf("%d",osszeg % 11);

    return 0;
}