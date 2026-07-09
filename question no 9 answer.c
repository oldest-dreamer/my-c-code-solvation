#include<stdio.h>
int main()
{
    float base,height,area;
    printf("enter the base and height value:\n");
    scanf("%f %f",&base, &height);
    area=0.5*base*height;
    printf("the area of triangle:%f\n", area);
    return 0;
}
