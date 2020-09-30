#include <stdio.h>

int main(){

    double vagokep[10] = {8,8,8,8,8,8,8,8,8,8}, selejt[10] = {0};
    double igeny;


    while (scanf("%lf",&igeny) == 1){
        double min = 9;
        int index = -1;
        for (int i = 0; i < 10; i++)
            if(vagokep[i] < min && vagokep[i] >= igeny){
                min= vagokep[i];
                index = i;
            }
        if(index != -1)
            vagokep[index]-=igeny;
        else{
            int leg_index=0;
            for (int i = 0; i < 10; i++)
                if(vagokep[i] < vagokep[leg_index] )
                    leg_index = i;
            selejt[leg_index]+= vagokep[leg_index];
            vagokep[leg_index] = 8 - igeny;
        }
        
    }
    

    return 0;
}