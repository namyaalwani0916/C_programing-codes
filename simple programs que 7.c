#include <stdio.h>
int main()
{
    float hours,minutes;
    printf("enter time in minutes :");
    scanf("%f",&minutes);
     hours = minutes / 60;
    printf("%.1f hours is equal to %.1f minutes",hours,minutes);

}
    