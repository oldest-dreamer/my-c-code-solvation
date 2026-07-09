#include <stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5;
    float total,avg,percent;
    printf("enter the  subjecyt number: ");
    scanf("%f %f %f %f %f" , &sub1,&sub2,&sub3,&sub4,&sub5);
    
    total=sub1+sub2+sub3+sub4+sub5;
    avg=total/5;
    percent=(total/500)*100;

    printf("total:%f\n" , total);
    printf("avg: %f\n" , avg);
    printf("percent: %f\n" , percent);
    return 0;
}
