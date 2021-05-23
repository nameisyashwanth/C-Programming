/*Program to find Harshad Number
Harshad number: A harshad number (or Niven number) in a given number base is an integer that is divisible by the sum of its digits when written in that base. 
Ex: 21/(2+!) = 7
    81/(8+1) = 9
    153/(1+5+3) = 7  */

#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0)
    {
        m=temp%10;
        sum+=m;
        temp/=10;
    }
    if(n%sum==0)
        printf("The number %d is Harshad number",n);
    else
        printf("The number %d is not Harshad number",n);
}
:
