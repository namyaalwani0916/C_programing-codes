#include <stdio.h>
int main()
{
    int sum = 0;
    
    for (int i=1; i<=100;i++){
        if(i % 3 == 0){
            sum = sum + i;
        }
    }

    printf("Sum of number divisible by 3 between 1 to 100:%d\n",sum);
    return 0;
    
}