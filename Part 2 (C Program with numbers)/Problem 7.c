#include<stdio.h>
int main()
{
    int a, b, c, large;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    large = (a>b)? (a>c?a:c):(b>c?b:c);

    printf("Largest number is = %d\n", large);

    return 0;
}
