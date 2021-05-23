/*Program to find exponent of a number using power function*/

#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,a;
    printf("Enter the base:");
    scanf("%d",&n);
    printf("Enter the power:");
    scanf("%d",&m);
    a=pow(n,m);
    printf("The base %d raised to power %d is:%d",n,m,a);
}
