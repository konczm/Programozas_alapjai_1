#include <stdio.h>

int main(void)
{
    int szam=0;
    int jegyek[5] = {0, 0, 0, 0, 0};

    /* 3 2 3 1 5 2 3 1 5 */

    while(scanf("%d",&szam) != 0){
        if(szam > 0 && szam < 6)
            jegyek[szam-1]++;
    }

    for (int i = 5; i > 0; i--)
        printf("%d: %d db \n",i, jegyek[i-1]);
        
    return 0;
}