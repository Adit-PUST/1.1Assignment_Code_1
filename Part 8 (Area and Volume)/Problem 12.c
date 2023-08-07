#include<stdio.h>
#include<math.h>
int main()
{
    float radius, height, volume, area;

    printf("Enter radius value of the Cone : ");
    scanf("%f", &radius);
    printf("Enter height of the Cone : ");
    scanf("%f", &height);

    volume = (M_PI * radius * radius * height)/3;
    area = M_PI * radius * (radius + sqrt((height * height) +( radius * radius)));

    printf("Volume of the Cone is = %0.2f\n", volume);
    printf("Surface area of the Cone is = %0.2f\n", area);

    return 0;
}
