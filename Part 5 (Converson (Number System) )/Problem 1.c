#include<stdio.h>
int main()
{
    int num, rem, x, i=1, binary=0;

    printf("Enter a decimal number : ");
    scanf("%d", &num);

    x=num;

    while(num!=0){

    rem=num%2;
    num=num/2;
    binary=binary+(rem*i);
    i=i*10;
}

    printf("The binary number is %d for %d", binary, x);
    return 0;
}
