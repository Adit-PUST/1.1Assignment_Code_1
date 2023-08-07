#include<stdio.h>
int main()
{
    int n, temp, count=0;

    printf("Enter any number = ");
    scanf("%d", &n);

    temp=n;

    while(temp!=0){

        temp=temp/10;
        count++;
    }
    printf("Number of Digits in the number : %d", count);

    return 0;
}
