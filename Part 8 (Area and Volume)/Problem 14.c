#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, l, w, r, P_C, P_R, P_T;

    printf("Enter three values of arms of the Triangle : ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Enter lenght and width of the Rectangle : ");
    scanf("%f %f", &l, &w);

    printf("Enter radius of the Circle : ");
    scanf("%f", &r);

    P_C = 2 * M_PI * r;
    P_R = 2 * (l + w);
    P_T = a + b + c ;

    printf("Perimeter of a circle, rectangle, triangle are = %0.2f, %0.2f, %0.2f", P_C, P_R, P_T);

    return 0;
}
//C=2πr
//P=2(l+w)
//P=a+b+c
