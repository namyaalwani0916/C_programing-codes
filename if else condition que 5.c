#include <stdio.h>

int main() {
    float gross_salary, discount, net_salary;

    printf("Enter the gross salary: ");
    scanf("%f", &gross_salary);

    
    if (gross_salary > 20000) {
       discount = 0.15 * gross_salary;
    } else if (gross_salary > 10000) {
        discount = 0.10 * gross_salary;
    } else {
        discount = 0.05 * gross_salary;
    }

    net_salary = gross_salary - discount;

    printf("\n--- Salary Breakdown ---\n");
    printf("Gross Salary: %.2f\n", gross_salary);
    
    printf("Discount  : -%.2f\n", discount);
    printf("------------------------\n");
    printf("Net Salary  : %.2f\n", net_salary);

    return 0;
}