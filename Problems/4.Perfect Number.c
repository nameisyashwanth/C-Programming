/*Program to find Perfect number
Prefect number: A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself
Ex: 28 = 1  + 2 + 4 + 7 + 11 (sum of divisors)*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
        printf("The number %d is a perfect number",n);
    else
        printf("The number %d is not a perfect number",n);
}
