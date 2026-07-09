#include<stdio.h>
int main()
{
    float length,width, area;
    printf("enter the Rectangle length and wigth value: \n ");
    scanf("%f %f", &length, &width);
    area=length*width;
    printf("area of rectangle :%f\n", area);
    return 0;
}
