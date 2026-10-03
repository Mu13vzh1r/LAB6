#include <stdio.h>
int main(){
    int pin = 0, remAttempts = 3, correctPin = 1234;
    while (pin != correctPin && remAttempts > 0){
        printf("Enter your PIN:\n");
        scanf("%d", &pin);

        if (pin == correctPin)
            printf("Login Successful.\n");
        else{
            remAttempts--;
            if (remAttempts > 0)
                printf("Remaining Attempts: %d\n", remAttempts);
            else
                printf("Account Locked.");
        }    
    }
}