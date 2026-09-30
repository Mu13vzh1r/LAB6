#include <stdio.h>
int main(){
    float amount;
    float total = 0;
    int deposits = 0;

    do{
        printf("Enter the amount saved: ");
        scanf("%f", &amount);
        if (amount >= 1){
            total += amount;
            deposits++;
        }

    }while (amount >= 1);

    printf("Total Savings: Rs.%.2f\n", total);
    printf("Number of Deposits: %d", deposits);
}