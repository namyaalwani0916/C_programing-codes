#include <stdio.h>
int main()
{
    float lenght,breadth;
    printf("enter lenght :");
    scanf("%f",&lenght);
    printf("enter breadth :");
    scanf("%f", &breadth);
    printf("area of rectangle :%.1f\n", lenght * breadth);
    printf("perimeter of rectangle :%.1f\n", 2 * (lenght + breadth));

}
    