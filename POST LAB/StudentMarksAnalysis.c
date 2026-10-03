#include <stdio.h>
int main(){
    float studentMarks[5], totalMarks = 0, averageMarks, highestMarks, lowestMarks;
    for (int i = 0; i < 5; i++){
        printf("Enter the student's marks:\n");
        scanf("%f", &studentMarks[i]);
    }

    highestMarks = studentMarks[0];
    lowestMarks = studentMarks[0];
    
    for (int i = 0; i < 5; i++){
        totalMarks += studentMarks[i];
        if (studentMarks[i] > highestMarks)
            highestMarks = studentMarks[i];
        if (studentMarks[i] < lowestMarks)
            lowestMarks = studentMarks[i];
    }
    averageMarks = totalMarks/5;
    
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);
    printf("Highest Marks: %.2f\n", highestMarks);
    printf("Lowest Marks: %.2f", lowestMarks);

}