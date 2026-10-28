#include <stdio.h>
int main()
{
    float hours,minutes;
    printf("enter time in hours :");
    scanf("%f",&hours);
    minutes = hours * 60;
    printf("%.1f hours is equal to %.1f minutes",hours,minutes);

}
    