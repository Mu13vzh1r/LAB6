#include <stdio.h>
int main(){
    float price;
    float bill = 0;
    char order[100];
    int choice;
    int items = 0;
    do{
        items++;
        printf("What do you want to order?\n");
        scanf(" %[^\n]", order);
        printf("What is the price?\n");
        scanf("%f", &price);

        bill += price;

        printf("Do you want to order another item? Type 1 for Yes and 0 for No\n");
        scanf("%d", &choice);


    }while (choice == 1);

    printf("Total Bill: Rs.%.2f\n", bill);
    printf("Items Ordered: %d", items);
}