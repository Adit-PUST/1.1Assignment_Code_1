#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, s, area;
    printf("Enter values of arms : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle is = %0.2lf\n", area);

    return 0;
}
