#include <stdio.h>
int main()
{
    float num,min,max;

    printf("Enter the number :");
    scanf("%f",&num);

    max = min = num;
     for(int i = 1;i<=100;i++){
        printf("Enter the number %d:",i);
        scanf("%f",&num);

        if (num > max){
            max = num;

        }
        if (num < min){
            min = num;
        }
     }
      printf("\n Largest: %.2f\n",max);
      printf("\n Smallest: %.2f\n", min);

      return 0;
}