#include<stdio.h>
#define pi 3.14
int main()
{
    float radius,Area;
    scanf("%f",%radius);
    Area = pi * radius * radius;
    printf("Area: %.2f",Area);
    return 0;
}