#include <stdio.h>
int main()
{
    int sub1,sub2,sub3;
    float average,total;

    printf("enter the marks of sub1:");
    scanf("%d",&sub1);
    printf("enter the marks of sub2:");
    scanf("%d",&sub2);
    printf("enter the marks of sub3:");
    scanf("%d",&sub3);

    total = sub1 + sub2 + sub3;
    average = total / 3;

    printf("-------Result summary-----\n");
    printf("total of three sub :%d\n",total);
    printf("average of three sub :%f\n",average);

    //check for fail or pass 
    if (sub1 < 35 || sub2 < 35 || sub3 < 35) {
        printf("Grade : Fail (Secured less than 35 in at least one subject)\n");
    }
        else if(average >= 70) {
            printf("Grade : Distinction\n");
        } 
        else if(average >= 60) {
            printf("Grade : First\n");
        }
        else if(average >=50) {
            printf("Grade : Second\n");
        }
        else if(average>=35) {
            printf("Grade : Third\n");
        }
        else{
            printf("Grade : Fail\n");
        }
        return 0;
           

}