#include<stdio.h>
int main()
{
    float a, b, h, area;

    printf("Enter two values of Parallel Sides Of the Trapezium : ");
    scanf("%f %f", &a, &b);

    printf("Enter Height of the Trapezium : ");
    scanf("%f", &h);

    area = 0.5*(a+b)*h;

    printf("Area of the trapezium is = %0.2f\n", area);

    return 0;
}
