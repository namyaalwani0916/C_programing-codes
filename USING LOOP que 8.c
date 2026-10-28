#include <stdio.h>
int main  ()
{
    int n, sum=0;
    printf("enter n :");
    scanf("%d",&n);

    for(int i = 1;i <=n ;i++){
        sum = sum + (2 * i -1);
    }
    printf("sum of first %d natural number = %d\n",n,sum);

    return 0;
}
