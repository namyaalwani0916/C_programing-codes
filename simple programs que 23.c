#include <stdio.h>

int main()
{
    int maths,physics,chemistry;
    printf("enter the marks of maths :");
    scanf("%d",&maths);

    printf("enter the marks of physics :");
    scanf("%d",&physics);

    printf("enter the marks of chemistry :");
    scanf("%d",&chemistry);

    printf("total of this three subject :%d\n", maths + physics + chemistry);

    printf("average of this three subject :%d",(maths + physics + chemistry) / 3);
}