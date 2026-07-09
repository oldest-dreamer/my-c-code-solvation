#include<stdio.h>
int main()
{
    float c,fahr;
    printf("enter celsius temp:\n");
    scanf("%f",&c);
    fahr=(c*9.0/5.0+32);
    printf("temp in Fahrenheit:%f\n", fahr);
    return 0;
}
