#include <stdio.h>

int main()
{
    float principal, rate, years;
    
    printf("Enter principal value (P) :");
    scanf("%f", &principal);
    
    printf("Enter rate of interest (R) :");
    scanf("%f", &rate);
    
    printf("Enter no. of year (N) :");
    scanf("%f", &years);
    
    printf("interest amount :%f", principal * rate * years / 100);
    
    return 0;
}