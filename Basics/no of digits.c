/*Program to find number of digits in a given number*/

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    int b;
    while(a!=0)
    {
        a=a/10;
        ++b;
    }
    printf("Number of digits is : %d",b);
}
