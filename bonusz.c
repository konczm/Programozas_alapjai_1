#include <stdio.h>
int main(void){
    //3 40000 EUR
    int ker_kat, kereset, bonusz;
    scanf("%i %i", &ker_kat, &kereset);
    switch (ker_kat)
    {
        case 0:
            printf_s("Bonus: %d EUR", 0);
            break;
        case 1:
            printf_s("Bonus: %d EUR", 1000);
            break;
        case 2:
            printf_s("Bonus: %d EUR", kereset/10);
            break;
        case 3:
            printf_s("Bonus: %d EUR", kereset/10+1000);
            break;
        default:
            printf_s("INVALID\n");
            printf_s("Bonus: %d EUR", 0);
            break;
    }
    return 0;
}