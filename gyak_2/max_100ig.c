#include<stdio.h>

/* Bendegúz megoldása */
int main()
{

    int a, max, max_szam;
    int i;
    max=0;
    for(i=0; i<100;i++)
    {
        scanf("%d", &a);
        if (a>max)
        {
            max =a;
            max_szam=i;
        }
    }
    printf("%d %d", max, max_szam);

    return 0;
}