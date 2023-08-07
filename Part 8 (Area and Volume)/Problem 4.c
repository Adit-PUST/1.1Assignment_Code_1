#include<stdio.h>
int main()
{
    double base, height, area;
    printf("Enter value of base : ");
    scanf("%lf", &base);

    printf("Enter value of height : ");
    scanf("%lf", &height);

    area=0.5*base*height;

    printf("Area of Triangle is = %0.2lf\n", area);

    return 0;
}
