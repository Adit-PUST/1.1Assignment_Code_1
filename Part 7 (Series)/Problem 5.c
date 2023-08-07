#include<stdio.h>
int main()
{
    float a, r, i, sum=1, cell=1, power=1;
    int n, expo;

    printf("Enter the first term of G.P Series : ");
    scanf("%f", &a);

    printf("Enter the common ratio of G.P Series : ");
    scanf("%f", &r);

    printf("Enter exponent of number : ");
    scanf("%d", &expo);

    for(i=1; i<=expo; i++){
        cell=cell+power;
        power=power*r;
        sum=sum+cell;
    }

    printf("\n Sum of the G.P : %f", sum);

    return 0;
}
