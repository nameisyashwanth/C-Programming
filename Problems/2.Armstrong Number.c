/*Program to find Armstrong number.
Armstrong Number:An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself
Ex: 371 = 3^3 + 7^3 + 1^3 (n=3)
    1634 = 1^4 + 6^4 + 3^4 + 4^4 (n=4) */

#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,count,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0)
    {
      temp=temp/10;
      ++count;
    }
    int p=n;
    while(p!=0)
    {
        m=p%10;
        sum=sum+pow(m,count);
        p=p/10;
    }
    if(n==sum)
        printf("The number %d is a Armstrong number",n);
    else
        printf("The number %d is not a Armstrong number",n);
}
