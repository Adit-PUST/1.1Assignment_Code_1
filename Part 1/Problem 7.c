#include<stdio.h>
int main()
{
    int a, b, c, d;
    float x1, x2;

    printf("Enter a = ");
    scanf("%d", &a);

    printf("Enter b = ");
    scanf("%d", &b);

    printf("Enter c = ");
    scanf("%d", &c);

    if(a!=0){

    d = (b*b) - (4*a*c);
    x1=(float)(-b+d)/(2*a);
    x2=(float)(-b-d)/(2*a);
    printf("x = %0.2f\n", x1);
    printf("x = %0.2f\n", x2);

    }
    else{
        printf("It is not Quadratic Equation.\n");
    }

    return 0;
}
