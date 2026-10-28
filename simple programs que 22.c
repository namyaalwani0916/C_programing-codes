#include <stdio.h>

int main()
{
    float net_sales,gross_sales;

    printf("enter the gross sales :");
    scanf("%f",&gross_sales);

    net_sales = gross_sales - 0.1 * gross_sales;
    printf("net sales will be :%f",net_sales);


}