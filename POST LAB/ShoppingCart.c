#include <stdio.h>
int main(){
    float prices[5], total = 0, discount, finalAmount;
    for (int i = 0; i<5; i++){
        printf("Enter the Price:\n");
        scanf("%f", &prices[i]);
        total += prices[i];
    }

    if (total > 10000)
        discount = total*0.1;
    finalAmount = total - discount;
    
    printf("Total Amount: Rs.%.2f\n", total);
    printf("Discount: Rs.%.2f\n", discount);
    printf("Final Amount: Rs.%.2f", finalAmount);
}