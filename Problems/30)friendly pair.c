#include<stdio.h>
int main()
{
    int a,b,sum1=0,sum2=0,i;
    printf("Enter the numbers to find whether the are friendly pair or not:");
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
          sum1=sum1+i;
        }
    }
    printf("Sum of factors of %d is %d",a,sum1);
    for(i=1;i<b;i++)
    {
        if(b%i==0)
        {
            sum2=sum2+i;
        }
    }
    printf("\nSum of factors of %d is %d",b,sum2);
    if(sum1==b && sum2==a)
        printf("\nThe numbers %d and %d are friendly pair",a,b);
    else
        printf("\nThe numbers %d and %d are not friendly pair",a,b);
}
