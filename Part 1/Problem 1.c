#include<stdio.h>
int main()
{
    int n, i, sum=0, temp;

    printf("Enter any number = ");
    scanf("%d", &n);

    for(i=1; i<n; i++){

        if(n%i==0){
            temp=i;
            sum=sum+temp;
        }
    }

    if(sum==n){
        printf("Perfect Number.\n");

    }

    else{
        printf("The number is not Perfect Number.\n");
    }

    return 0;
}
