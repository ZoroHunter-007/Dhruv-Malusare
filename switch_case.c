#include<stdio.h>
void main()
{
    int a=20,b=10;
    char ch;
    printf("Enter your choice:\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':
        printf("Addition is %d\n",a+b);
        break;

        case '-':
        printf("Addition is %d\n",a-b);
        break;

        case '*':
        printf("Addition is %d\n",a*b);
        break;

        case '/':
        printf("Addition is %d\n",a/b);
        break;

        default:
        printf("Invalid character\n");
        break;
    }
}