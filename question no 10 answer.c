#include<stdio.h>
int main()
{
    float cm,m,km;
    printf("enter the value in cm:\n");
    scanf("%f", &cm);
    m= cm/100;
    km= cm/100000;
    printf("In meter:%f\n",m);
    printf("In kilometer:%f\n",km);
    return 0;
}
