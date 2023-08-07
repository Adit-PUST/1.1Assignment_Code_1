#include<stdio.h>
int main()
{
    float a, b, area;

    printf("Enter two values of Diagonal of the Rhombus : ");
    scanf("%f %f", &a, &b);

    area = 0.5 * a * b;

    printf("Area of the Rhombus is = %0.2f\n", area);

    return 0;


}
