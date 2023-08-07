#include<stdio.h>
int main()
{
    int num, rem, sum=0, temp;

    printf("Enter a number : ");
    scanf("%d", &num);

    temp=num;

    while(temp!=0){
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;

    }
    if(sum==num){
        printf("This is a palindrome number.\n");
    }
    else{
            printf("This is not a palindrome number.\n");
    }
    return 0;
}

