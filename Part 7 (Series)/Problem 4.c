#include<stdio.h>
int main()
{
    int n, d, sum=0, c=0, i, cell=0, a;

    printf("Enter total terms of the series : ");
    scanf("%d", &n);
    printf("Enter first number of the series : ");
    scanf("%d", &a);

    printf("Enter the common difference of the series : ");
    scanf("%d", &d);

    for(i=1; i<=n; i++){
        cell=a+c*d;
        sum=sum+cell;
        c++;

    }
    printf("The sum of given A.P is = %d\n", sum);

    return 0;
}
