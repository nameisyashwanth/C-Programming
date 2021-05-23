/*Program to find whether the given number is even or odd*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter the number to check whether even or odd:");
    scanf("%d",&a);
    if(a%2==0)
        printf("The number is even");
    else
        printf("The number is odd");
}
