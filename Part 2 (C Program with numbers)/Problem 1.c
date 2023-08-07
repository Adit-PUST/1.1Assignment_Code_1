#include<stdio.h>
int main()
{
    int num, r, temp;
    printf("Enter a number : ");
    scanf("%d", &num);
    temp=num;

    while(temp != 0){
        r=temp%10;
        temp=temp/10;
        printf("%d\t", r);

    }
    return 0;
}
