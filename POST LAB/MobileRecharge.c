#include <stdio.h>
int main(){
    int recharge, attempts = 0, balance = 0;
    do{
        printf("Enter the recharge amount:\n");
        scanf("%d", &recharge);
        if (recharge > 0){
            balance += recharge;
            attempts++;
        }
        if (balance > 5000)
            printf("Recharge Limit Reached.\n");

    }while (recharge > 0 && balance <= 5000);

    printf("Total Recharged Amount: %d\n", balance);
    printf("Number of recharge attempts: %d", attempts);
}