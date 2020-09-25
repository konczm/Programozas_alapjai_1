#include<stdio.h>

int main(void){
    int szamok[10];
    szamok[0] = 0;
    szamok[1] = 1;

    for (int i = 2; i < 10; i++)
        szamok[i] = (szamok[i-1] + szamok[i-2]);
    

    printf("Fibonacci első 10 száma:");
    for (int i = 0; i < 10; i++)
        printf("%d ", (szamok[i]) );
    
}