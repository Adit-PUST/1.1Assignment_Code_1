#include<stdio.h>
int main()
{
    int i, n, num, large=0;

    printf("How many numbers : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){

        scanf("%d", &num);

        if(num>large){
            large = num;
        }
    }
    printf("Largest of n numbers is = %d\n", large);

    return 0;
}
