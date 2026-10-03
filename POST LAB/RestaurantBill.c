#include <stdio.h>
int main(){
    int choice = 1;
    float price, discount, totalBill = 0, finalBill;
    while (choice == 1){
        printf("Enter the price of the item:\n");
        scanf("%f", &price);

        totalBill += price;
        printf("Do you want to order another item? Enter 1 for Yes or 2 for No.\n");
        scanf("%d", &choice);

    }
    printf("Total Bill: Rs.%.2f\n", totalBill);
    if (totalBill > 5000)
        discount = totalBill*0.05;
        
    finalBill = totalBill - discount;
    printf("Discount: Rs.%.2f\n", discount);
    printf("Final Bill: Rs.%.2f", finalBill);

}