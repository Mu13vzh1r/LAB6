#include <stdio.h>
int main(){
    float employeeSalaries[6];
    float salary;
    for (int i = 0; i <= 5; i++){
        printf("Enter the salary of Employee %d: ", i+1);
        scanf("%f", &salary);

        employeeSalaries[i] = salary;
    }
    int count = 0;
    for (int i = 0; i <= 5; i++){
        printf("Employee %d: Rs.%.2f\n", i+1, employeeSalaries[i]);
        if (employeeSalaries[i] > 50000){
            count += 1;
        }
    }
    printf("Number of Employees with Salaries greater than Rs. 50,000: %d", count);
}