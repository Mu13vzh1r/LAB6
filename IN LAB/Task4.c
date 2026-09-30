#include <stdio.h>
int main(){
    int marks, choice;
    int counter = 0;
    do{
        counter ++;
        printf("Enter marks for Student %d\n", counter);
        scanf("%d", &marks);
        printf("Student %d: %d Marks\n", counter, marks);

        printf("Do you want to enter another student's marks? Type 1 for Yes and 0 for No\n");
        scanf("%d", &choice);


    }while (choice == 1);

    printf("Total Number of Students: %d", counter);
}