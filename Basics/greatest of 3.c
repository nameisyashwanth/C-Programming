/*Program to find greatest of three numbers using TERNARY operator*/

#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    d=(a>b)?a:b;
    e=(d>c)?d:c;
    printf("The greatest among three numbers is:%d",e);
}
