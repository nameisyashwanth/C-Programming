/*Program to find Abundant number
Abundant number: an abundant number or excessive number is a number that is smaller than the sum of its proper divisors.
Ex: 18 divisors of 18: 1,2,3,6,9
     1+2+3+6+9 = 21
     21 > 18   */

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }
    if(n<sum)
    {
      printf("The sum of the factors of the number %d is %d.",n,sum);
      printf("\nTherefore the number %d is an Abundant number.",n);
    }
    else
      printf("The number %d is not an Abundant number.",n);
}
