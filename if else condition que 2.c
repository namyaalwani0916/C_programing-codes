#include <stdio.h>
int main()
{
    float a,b,c;
    float largest,smallest;

    printf("enter three number :");
    scanf("%f %f %f",&a,&b,&c);

    //largest value
    if(a >= b && a >= c) {
        largest = a;
    }
    else if(b >= a && b >=c) {
        largest = b;
    }
    else {
        largest = c;
    }

    //smallest value
    if(a <= b && a <= c) {
        smallest = a;
    }
    else if(b <= a && b <= c) {
        smallest = b;
    }
    else {
        smallest = c;
    }
    printf("Largest:%.2f\n",largest);
    printf("smallest:%.2f\n",smallest);
    
    return 0;
}