#include<stdio.h>
#include<math.h>

int main()
{
    float a, area;
    printf("Enter value arm of the triangle =  ");
    scanf("%f", &a);

    area=sqrt(3)/4*a*a;
    printf("Area = %0.2f\n", area);
    return 0;
}

