#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,i,flag;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the last number :");
    scanf("%d",&b);
    printf("The prime numbers between %d and %d is :",a,b);
    while(a<b)
    {
        flag=0;
        for(i=2;i<a/2;++i)
        {
            if(a%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf(" %d ",a);
        ++a;
    }
}

