//H.C.F = High Common Factor...
#include<stdio.h>
int main()
{
    int a, b, rem, HCF;
    printf("Enter a number = ");
    scanf("%d", &a);
    printf("Enter another number = ");
    scanf("%d", &b);
    if(a==0){
        HCF=a;
    }
    else if(b==0){
        HCF=b;
    }
    else{
        while(b!=0){
            rem=a%b;
            a=b;
            b=rem;
        }
        HCF=a;
    }
    printf("H.C.F=%d", HCF);
    return 0;
}
