#include<stdio.h>
int main()
{
    float lenght, width, height, volume, surface_area;

    printf("Enter Lenght of the Cuboids : ");
    scanf("%f", &lenght);

    printf("Enter Width of the Cuboids : ");
    scanf("%f", &width);

    printf("Enter Height of the Cuboids : ");
    scanf("%f", &height);

    volume = lenght * width * height;
    surface_area = 2 * (lenght * width) + 2 * (lenght * height) + 2 * (height * width);

    printf("Volume and surface area of cuboids are = %0.2f , %0.2f", volume, surface_area);

    return 0;
}
