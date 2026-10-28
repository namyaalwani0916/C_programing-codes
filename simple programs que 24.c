#include <stdio.h>
int main()
{
    float num1,num2,temp;

    printf("Enter first number :");
    scanf("%f",&num1);

    printf("Enter second nnumber :");
    scanf("%f",&num2);

    printf("\n ----before swapping---- \n");
    printf("first number :%.2f\n",num1);
    printf("second number :%.2f\n", num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("\n ----after swapping---- \n");
    printf("first number :%.2f\n",num1);
    printf("second number :%.2f\n",num2);

}