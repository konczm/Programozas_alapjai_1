#include <stdio.h>

int main()
{
    double szam=0, atlag=0, db=0;
    
    do{
        scanf("%lf",&szam);
        if(szam != 0){
            atlag += szam;
            db++;
        }
    }while ( szam != 0 );
    
    printf("%.2f", (atlag/db));

    return 0;
}