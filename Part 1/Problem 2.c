#include<stdio.h>
int main()
{
    int num, sum=0, r, temp;

    printf("Enter a number : ");
    scanf("%d", &num);

    temp=num;

    while(temp!=0){
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(num==sum){
        printf("%d is a Armstrong Number.\n", num);

    }
    else{
        printf("%d is not a Armstrong Number.\n", num);
    }
    return 0;
}
