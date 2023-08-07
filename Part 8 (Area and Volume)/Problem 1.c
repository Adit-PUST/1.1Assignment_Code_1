#include<stdio.h>
int main()
{
    float redius, pi, area;
    pi=3.1416;

    printf("Enter redius value of a cicle : ");
    scanf("%f", &redius);

    area=pi*redius*redius;

    printf("Area of the circle is = %0.2f\n", area);

    return 0;
}
