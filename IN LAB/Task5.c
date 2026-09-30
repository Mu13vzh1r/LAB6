#include <stdio.h>
int main(){
    float temperature;
    float total = 0;
    int hotCount = 0;
    for (int i = 1; i <= 7; i++){
        printf("Enter the temperature for Day %d: ", i);
        scanf("%f", &temperature);

        if (temperature > 100)
            hotCount++;

        total += temperature;

    }
    printf("\nNumber of Days the Temperature was above 100: %d", hotCount);
    printf("\nTotal Temperature: %.2f", total);
}