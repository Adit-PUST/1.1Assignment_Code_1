#include<stdio.h>
int main()
{
    int base, expo;
    int power=1, i;

    printf("Enter base of num = ");
    scanf("%d", &base);

    printf("Enter exponent of number = ");
    scanf("%d", &expo);

    for(i=1; i<=expo; i++){

        power=power*base;

    }
    printf("%d ^ %d = %d", base, expo, power);


    return 0;
}

