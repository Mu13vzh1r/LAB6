#include <stdio.h>
int main(){
    int numStudents = 0;
    float average, marks = 0, total = 0;
    while (marks != -1){
        printf("Enter marks between 0 and 100. Enter -1 to quit.\n");
        scanf("%f", &marks);

        if (marks >= 0 && marks <= 100){
            total += marks;
            numStudents++;
        }
        else if (marks != -1)
            printf("Invalid marks entered.\n");
    }
    average = total/numStudents;
    printf("Total Marks: %.2f\nNumber of Students: %d\nAverage Marks: %.2f", total, numStudents, average);
}