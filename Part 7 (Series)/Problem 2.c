#include<stdio.h>
int main()
{
    int n, sum=0, cell=0,i, d=1;
    printf("Enter a number : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        cell=cell+d;
        sum = sum+cell*cell;

    }
    printf("Sum of the series is = %d\n", sum);
    return 0;
}
