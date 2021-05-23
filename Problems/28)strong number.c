#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,fac=1,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0)
    {
       fac=1;
       m=temp%10;
       for(i=1;i<=m;i++)
        {
            fac=fac*i;
        }
        printf("\nThe factorial of %d is %d",m,fac);
        sum=sum+fac;
        temp=temp/10;
    }
    if(sum==n)
        printf("\nThe number %d is Strong Number",n);
    else
        printf("\nThe number %d is not a Strong Number",n);
}
