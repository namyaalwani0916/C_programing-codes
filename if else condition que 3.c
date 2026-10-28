#include <stdio.h>
int main()
{
    float net_salary, allowances,deductions,gross_salary;

    printf("enter the gross salery:");
    scanf("%f",&gross_salary);

    if(gross_salary > 10000) {
        allowances = 0.1 * gross_salary;
        deductions = 0.03 * gross_salary;
    }
    else if (gross_salary > 5000) {
        allowances = 0.07 * gross_salary;
        deductions = 0.02 * gross_salary;
    }
    else {
        allowances = 0.00;
        deductions = 0.00;
    }

    net_salary= gross_salary + allowances - deductions;

    printf("\n-----Salary breakdown-----\n");
    printf("Gross salary = %.2f\n",gross_salary);
    printf("Allowances = %.2f\n",allowances);
    printf("Deductions = %.2f\n",deductions);
    printf("---------------------\n");
    printf("Net salary= %.2f\n",net_salary);

    return 0;
}


    


