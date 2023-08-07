#include<stdio.h>
int main()
{
    float a, b, area;

    printf("Enter two values of Diagonal of the Parallelogram : ");
    scanf("%f %f", &a, &b);

    area = a * b;

    printf("Area of the Parallelogram is = %0.2f\n", area);

    return 0;


}
