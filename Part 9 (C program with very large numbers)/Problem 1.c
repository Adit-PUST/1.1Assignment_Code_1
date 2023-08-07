#include<stdio.h>
int main()
{
    int n, i;
    long long int fact=1;

    printf("Enter any number = ");
    scanf("%d", &n);

    for(i=n; i>=1; i--){

        fact=fact*i;
    }
    printf("Factorial is = %lld", fact);

    return 0;
}
