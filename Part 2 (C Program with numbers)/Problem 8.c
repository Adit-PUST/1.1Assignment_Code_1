#include<stdio.h>
int main()
{
    int num, sum, r;
    printf("Enter a number : ");
    scanf("%d", &num);

    while(num>10){
        sum=0;
        while(num!=0){
            r=num%10;
            sum=sum+r;
            num=num/10;
        }
        if(sum>10)
            num=sum;
        else
            break;
    }

    printf("Generic root of any number is = %d", sum);

    return 0;

}
