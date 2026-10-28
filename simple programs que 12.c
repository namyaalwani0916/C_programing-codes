#include <stdio.h>
int main()
{
    float kg,gram;
    printf("enter kg :");
    scanf("%f",&kg);
    gram = kg * 1000;
    printf("%.1f kg is equal to %.1f gram",kg,gram);
}