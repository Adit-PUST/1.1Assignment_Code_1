#include<stdio.h>
int main()
{
    float d, sum=0, c=0, i, cell=0, a;
    int n;

    printf("Enter total terms of the series : ");
    scanf("%d", &n);
    printf("Enter first number of the series : ");
    scanf("%f", &a);

    printf("Enter the common difference of the series : ");
    scanf("%f", &d);

    for(i=1; i<=n; i++){
        cell=1/(a+c*d);
        sum=sum+cell;
        c++;

    }
    printf("The sum of given A.P is = %f\n", sum);

    return 0;
}
