#include<stdio.h>
#include<math.h>

int main()
{
    float a, r, i, sum=0;
    int n;

    printf("Enter the first term of the series : ");
    scanf("%f", &a);

    printf("Enter the total numbers in the Series : ");
    scanf("%d", &n);

    printf("Enter the common ratio of the Series : ");
    scanf("%f", &r);

    sum=(a*(1-pow(r,n)))/(1-r);

    printf("\n Sum of the G.P : %f", sum);

    return 0;
}
