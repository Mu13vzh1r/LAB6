#include <stdio.h>
int main(){
    int choice = 1;
    float price, total = 0, discount, finalAmount;
    while (choice == 1){
        printf("Enter the price of the item:\n");
        scanf("%f", &price);

        total += price;
        printf("Do you want to add another item? Enter 1 for Yes or 2 for No.\n");
        scanf("%d", &choice);

    }
    printf("Total Price: Rs.%.2f\n", total);
    if (total > 10000)
        discount = total*0.1;
        
    finalAmount = total - discount;
    printf("Discount: Rs.%.2f\n", discount);
    printf("Final Amount: Rs.%.2f", finalAmount);

}