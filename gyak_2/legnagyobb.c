#include<stdio.h>

int main()
{
	int szam;
    int max=0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &szam);
        if(max < szam)
            max = szam;
    }
    
    printf("Legnagyobb: %d", max);

	return 0;
}