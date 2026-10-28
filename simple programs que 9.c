#include <stdio.h>
int main()
{
    float doller,rupees;
    const float exchange_rate = 48;
    printf("Enter rupees :");
    scanf("%f",&rupees);
    doller = rupees / exchange_rate;
    printf("doller %.1f is equal to rupees %.1f",doller,rupees);
}