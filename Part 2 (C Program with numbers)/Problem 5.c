#include<stdio.h>
int main()
{
    int a, b, c;

    printf("Enter a = ");
    scanf("%d", &a);

    printf("Enter b = ");
    scanf("%d", &b);

    c=a+~b+1;

    printf("Result = %d\n", c);

    return 0;
}
