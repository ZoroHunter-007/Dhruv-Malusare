#include<stdio.h>
void main(){
    int i=1;
    int fact=1;
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is %d\n",n,fact);

}
