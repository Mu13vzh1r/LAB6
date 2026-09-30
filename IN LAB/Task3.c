#include <stdio.h>
int main(){
    int number = 1;
    while (number != 0){
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number != 0)
            printf("The cube of %d is %d\n", number, number*number*number);
    }
}