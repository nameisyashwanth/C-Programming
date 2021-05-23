#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,count,i;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the last number :");
    scanf("%d",&b);
    int temp=a;
    for(temp=a;temp<=b;temp++)
    {
        count=0;
        for(i=1;i<=b;i++)
        {
            if(temp%i==0)
                count++;
        }
        if(count==2)
            printf(" %d ",temp);
    }
}
