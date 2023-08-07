#include<stdio.h>
int main()
{
    int num, temp, r;

    printf("Enter any Number : ");
    scanf("%d", &num);

    printf("\n\n");

    temp=num;

    printf("Split number into Digits : ");

    while(temp!=0){

        r=temp%10;
        temp=temp/10;

        printf("%d\t", r);

    }

    return 0;
}
