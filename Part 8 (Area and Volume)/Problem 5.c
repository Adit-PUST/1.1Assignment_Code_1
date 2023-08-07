#include<stdio.h>
int main()
{
    float a, b, area;

    printf("Length of rectangle = ");
    scanf("%f", &a);

    printf("Width of rectangle = ");
    scanf("%f", &b);

    area = a * b;

    printf("Area mof Rectangle is = %0.2f\n", area);

    return 0;
}
