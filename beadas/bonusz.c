#include <stdio.h>
int main(void){
    //3 40000 EUR
    int ker_kat, kereset, bonusz;
    scanf("%d %d", &ker_kat, &kereset);
    switch (ker_kat)
    {
        case 0:
            printf("Bonus: %d EUR", 0);
            break;
        case 1:
            printf("Bonus: %d EUR", 1000);
            break;
        case 2:
            printf("Bonus: %d EUR", kereset/10);
            break;
        case 3:
            printf("Bonus: %d EUR", kereset/10+1000);
            break;
        default:
            printf("INVALID\n");
            printf("Bonus: %d EUR", 0);
            break;
    }
    return 0;
}