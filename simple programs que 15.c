#include <stdio.h>
int main()
{
    float C,F;
    printf("enter F :");
    scanf("%f", &F);
    C = (F - 32) * 5 / 9;
    printf("%f F is equal to %f C",C,F);

}
    