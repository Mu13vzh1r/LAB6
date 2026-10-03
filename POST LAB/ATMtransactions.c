#include <stdio.h>
int main(){
    int balance = 50000;
    int withdrawals = 0;
    int wdAmount;

    do{
        printf("Enter the amount to withdraw: ");
        scanf("%d", &wdAmount);
        if (wdAmount >= 0 && (balance - wdAmount) >= 0){
            balance -= wdAmount;
            withdrawals++;
        }
        else if (wdAmount < 0)
            printf("Cannot withdraw a negative amount!\n");
        else
            printf("Insufficient balance.\n");
    }while (wdAmount != 0);

    printf("Balance left: %d\n", balance);
    printf("Number of Withdrawals: %d", withdrawals);


}