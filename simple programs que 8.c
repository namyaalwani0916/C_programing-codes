#include <stdio.h>
int main()
{
    float doller,rupees;
    const float exchange_rate = 48;
    printf("Enter doller :");
    scanf("%f",&doller);
    rupees = doller * exchange_rate;
    printf("doller %.1f is equal to rupees %.1f",doller,rupees);
}