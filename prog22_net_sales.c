#include <stdio.h>

int main() {
    float gross_sales, discount, net_sales;
    printf("Enter gross sales amount: ");
    scanf("%f", &gross_sales);
    discount = 0.10 * gross_sales;
    net_sales = gross_sales - discount;
    printf("Discount (10%%) = %.2f\n", discount);
    printf("Net Sales = %.2f\n", net_sales);
    return 0;
}
