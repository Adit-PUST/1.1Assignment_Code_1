#include<stdio.h>
int main()
{
    int n, i, sum=0, cell=0, d=1;
    printf("Enter the last value of series : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        cell=cell+d;
        sum=sum+cell;
    }
    printf("Sum of series is %d\n", sum);

    return 0;
}
