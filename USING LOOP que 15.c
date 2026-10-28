#include <stdio.h>
int main()
{
    int n;
    float num,sum = 0 , mean;

    printf("enter the total number of value (n): ");
    scanf("%d",&n);

    printf("Enter %d number :\n",n);
    for(int i = 1; i<=n;i++){
    printf("Value %d:",i);
    scanf("%f",&num);
    sum = sum + num;
    }

    mean = sum / n;

    printf("\nSum :%.2f\n", sum);
    printf("Mean:%.2f\n",mean);

    return 0;

}