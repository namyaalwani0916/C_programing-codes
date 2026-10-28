#include <stdio.h>
int main()
{
    float kg,gram;
    printf("enter gram :");
    scanf("%f",&gram);
    kg = gram / 1000;
    printf("%.1f kg is equal to %.1f gram",kg,gram);
}