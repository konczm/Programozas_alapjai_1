#include <stdio.h>

int main(){
    /*
        aknh = az átlag különbség nagyobb mint húsz,
        alm = ahol a lány magasabb
    */
    int fiu, lany, aknh = 0,alm = 0;

    while (scanf("%d %d",&fiu, &lany) == 2)
    {
        if(lany > fiu)
            alm++;
        if(lany - fiu > 20 || fiu - lany > 20)
            aknh++;
    }

    printf("%d %d", aknh, alm);

    return 0;
}