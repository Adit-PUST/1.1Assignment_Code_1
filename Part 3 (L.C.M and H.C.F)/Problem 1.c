//L.C.M = Least Common Multiple.
#include<stdio.h>
int main()
{
    int a, b, x, GCD,LCM;
    printf("Enter two numbers = ");
    scanf("%d%d", &a, &b);
    if(a<b){
        x=a;
    }
    else{
        x=b;
    }
    for(; x>=1; x--){
        GCD=x;
        break;

    }
    LCM=(a*b)/GCD;
    printf("L.C.M is = %d\n", LCM);
    return 0;
}
//G.C.D- another process...
/*#include<stdio.h>
int main()
{
    int a, b, rem, GCD;
    scanf("%d %d", &a, &b);
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
*/
