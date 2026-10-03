#include <stdio.h>
int main(){
    int electricityUnits[5], totalUnits = 0, highestUnits, lowestUnits;
    float bill, totalAmount = 0;
    for (int i = 0; i<5; i++){
        printf("Enter the Units:\n");
        scanf("%d", &electricityUnits[i]);
    }

    highestUnits = electricityUnits[0];
    lowestUnits = electricityUnits[0];


    for (int i = 0; i<5; i++){
        totalUnits += electricityUnits[i];
        if (electricityUnits[i] > highestUnits)
            highestUnits = electricityUnits[i];
        if (electricityUnits[i] < lowestUnits)
            lowestUnits = electricityUnits[i];

        bill = electricityUnits[i] * 10;
        if (electricityUnits[i] > 500)
            bill *= 1.05;
        totalAmount += bill;
    }
    
    printf("Total Units Consumed: %d\n", totalUnits);
    printf("Total Amount Collected: Rs.%.2f", totalAmount);
}