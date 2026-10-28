#include <stdio.h>
int main()
{
    float num1,num2;
    printf("enter two number:");
    scanf("%f %f",&num1,&num2);

    // compare two number
    if(num1>num2) {
        printf("Largest :%.2f\n",num1);
        printf("Smallest :%.2f\n",num2);
    }
    else if(num2>num1) {
        printf("Largest :%.2f\n",num2);
        printf("Smallest :%.2f\n",num1);

    }
    else {
        printf("both number are equal :%.2f",num1);
    }
    return 0;
}