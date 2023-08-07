//V=a3.
//Surface Area of cube=6a^2.
#include<stdio.h>
int main()
{
    float a, volume, surface_area;

    printf("Enter value of Edge of the cube : ");
    scanf("%f", &a);
    volume = a*a*a;
    surface_area = 6*a*a;

    printf("Volue of Cube is = %0.2f\n", volume);
    printf("Surface Area of Cube is = %0.2f\n", surface_area);

    return 0;
}
