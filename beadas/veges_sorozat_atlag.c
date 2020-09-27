#include <stdio.h>

int main()
{
    double szam, szumma=0, db=0;
    
    /* 2 4 5 1 2 0 => 2.8 */
    do{
        scanf("%lf",&szam);
        if(szam != 0){
            szumma += szam;
            db++;
        }
    }while ( szam != 0 );
    
    printf("%.2f", (szumma/db));

    return 0;
}