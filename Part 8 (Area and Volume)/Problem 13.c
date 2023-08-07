#include<stdio.h>
#include<math.h>
int main()
{
    float radius, volume, area;
    printf("Enter redius value of the Sphere : ");
    scanf("%f", &radius);
    volume =(float) 4/3 * M_PI * radius * radius * radius;
    area= 4 * M_PI * radius * radius;

    printf("Volume of the Sphere is = %0.2f\n", volume);
    printf("Surface area of the Sphere is = %0.2f\n", area);

    return 0;
}
