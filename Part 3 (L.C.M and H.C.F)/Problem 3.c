//G.C.F = Greatest Common Factor,,, G.C.D = Greatest Common Divisor...
#include<stdio.h>
int main()
{
    int a, b, rem, GCD;
    printf("Enter a number = ");
    scanf("%d", &a);
    printf("Enter another number = ");
    scanf("%d", &b);
    if(a==0){
        GCD=a;
    }
    else if(b==0){
        GCD=b;
    }
    else{
        while(b!=0){
            rem=a%b;
            a=b;
            b=rem;
        }
        GCD=a;
    }
    printf("GCD=%d", GCD);
    return 0;
}

