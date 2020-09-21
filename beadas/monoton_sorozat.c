#include <stdio.h>

int main()
{
    int szam=0, id=0, tovabb=0;
    int szamsor[50];

    do{
        if(scanf("%d",&szam) == 0)
            break;

        if(id <= 1 && szam != szamsor[id-1]){
            szamsor[id] = szam;
            id++;
            if(szamsor[0] < szamsor[1])
                tovabb = 1;
            else
                tovabb = 2;  
        }
        else if(tovabb == 1 && szam > szamsor[id-1]){
            szamsor[id] = szam;
            id++;
            tovabb = 1;
        }
        else if(tovabb == 2 && szam < szamsor[id-1]){
            szamsor[id] = szam;
            id++;
            tovabb = 2;
        }
        else
            tovabb = 0;        

    }while ( tovabb > 0);
    
    for (int i = 0; i < id; i++)
        printf("%d ",szamsor[i]);

    return 0;
}