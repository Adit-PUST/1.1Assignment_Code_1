#include<stdio.h>
#include<math.h>

int main()
{
    //V=πr2h
    //A=2πrh+2πr2
    float height, radius, volume, area;
    printf("Enter height of the Cylinder : ");
    scanf("%f", &height);

    printf("Enter radius of the Cylinder : ");
    scanf("%f", &radius);

    volume = M_PI * radius * radius * height;
    area = (2 * M_PI * radius * height)+ (2 * M_PI * radius * radius);

    printf("Volume and surface area of cylinder = %0.2f , %0.2f", volume, area);

    return 0;

}
