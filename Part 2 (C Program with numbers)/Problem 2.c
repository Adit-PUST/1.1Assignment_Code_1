#include<stdio.h>
int main()
{
      int num, sum=0, r, temp;

      printf("Enter a number : ");
      scanf("%d", &num);
      temp=num;

      while(temp!=0){
        r=temp%10;
        sum=sum+r;
        temp=temp/10;

      }
      printf("Sum of digit of given number is = %d", sum);
      return 0;
}
