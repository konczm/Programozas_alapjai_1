#include <stdio.h>

int main(void){

    int magassag;

    printf("teljes magassag: ");
    scanf("%d", &magassag);
/*
                
                x   
               x x  
         xx   x   x 
        x  x  xxxxx
        xxxx  x   x
        x  x  x   x
        x  x  x   x
        xxxx  xxxxx
*/

    if(magassag % 2 == 0){
        magassag++;
        for (int sor = 1; sor <= magassag/2; sor++){
            for (int oszlop = 1; oszlop <= magassag; oszlop++)
                if(oszlop == sor+(magassag/2) || oszlop == magassag-sor-(magassag/2) )
                    printf("X");
                else
                    printf(" ");
            printf("\n");
        }
    }
    else{
        magassag++;
        for (int oszlop = 1; oszlop < magassag; oszlop++)
            if(oszlop == magassag/2)
                printf("X");
            else
                printf(" ");
        printf("\n");

        for (int sor = 1; sor <= magassag/2-1; sor++){
            for (int oszlop = 1; oszlop <= magassag; oszlop++)
                    if(oszlop == sor+magassag/2 || oszlop == magassag-sor-magassag/2 )
                        printf("X");
                    else
                        printf(" ");
            printf("\n");
        }
    }
    magassag--;

    /* négyzet */
    for (int sor = 1; sor <= magassag; sor++){
        for (int oszlop = 1; oszlop <= magassag; oszlop++)
            if(oszlop == 1 || sor == 1 || oszlop == magassag || sor == magassag)
                printf("X");
            else
                printf(" ");
        printf("\n");
    }

    return 0;
}