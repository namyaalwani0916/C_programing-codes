#include <stdio.h>
int main()
{
    float doller,pounds,rupees;
    
    printf("Enter doller :");
    scanf("%f",&doller);

    float doller_to_rupees = 48;
    float pound_to_rupees = 70;

    rupees = doller * doller_to_rupees;
    pounds = rupees / pound_to_rupees;

    printf("doller %.1f is equal to pounds %.1f",doller,rupees,pounds);
}