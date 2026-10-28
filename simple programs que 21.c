#include <stdio.h>
int main()
{
    float gross_salary,allowance,net_salary,deduction;

    printf("Enter the gross salary :");
    scanf("%f",&gross_salary);

    allowance = 0.10 * gross_salary;
    deduction = 0.03 * gross_salary;

    net_salary = gross_salary + allowance - deduction;

    printf("---salary details---\n");
    printf("gross salary :%.1f\n",gross_salary);
    printf("allowance (10%):%.1f\n",allowance);
    printf("deduction (3%):%.1f\n",deduction);
    printf("net salary :%.1f\n", net_salary);
}