#include<stdio.h>

int main()
{
	int szam;
    double osszeg=0.0, db=0.0, parosdb=0;

    do{
        scanf("%d",&szam);
        if(szam != 0){
            osszeg += szam;
            db++;
        }
        if(szam % 2 == 0)
            parosdb++;
    }while ( szam != 0 );
    
    printf("atlag: %.2f\n", (osszeg/db) );
    printf("parosak: %d", parosdb);


	return 0;
}