/*Program to find whether the given number is prime or not*/

#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
       if(n%i==0)
            ++count;
    }
    if(count>1)
        printf("Not a prime number");
    else
        printf("The number is prime");
}
