/*Program to find greatest of two numbers using TERNARY operator */

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    c=(a>b)?a:b;
    printf("The greatest no is:%d",c);
}
