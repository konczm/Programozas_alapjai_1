#include <stdio.h>
int main(void){
    int a=0, b=0, oszto, maradek;
    scanf("%d %d",&a, &b);

    if(a < b){   
        maradek = b % a;
        oszto = a;
    }else{
        maradek = a % b;
        oszto = b;
    }
    while (maradek > 0)
    {
        int x = oszto % maradek;
        oszto = maradek;
        maradek = x;
    }
    printf("%d", oszto);
    return 0;
}