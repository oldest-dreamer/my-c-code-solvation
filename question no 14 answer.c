#include<stdio.h>
int main()
{
    float f,cal;
    printf("enter fahrenheit temp:\n");
    scanf("%f",&f);
    cal=((f-32)*5/9);
    printf("temp in calsius:%f\n", cal);
    return 0;
}
