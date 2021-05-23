#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,i,c,temp1,temp2,count,sum;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the last number :");
    scanf("%d",&b);
    for(i=a+1;i<b;++i)
    {
        count=0;
        sum=0;
        temp1=i;
        temp2=i;
        while(temp1!=0)
        {
            temp1/=10;
            ++count;
        }
        while(temp2!=0)
           {
               c=temp2%10;
               sum=sum+pow(c,count);
               temp2/=10;
           }
           if(sum==i)
            printf(" %d ",i);
    }
    return 0;
}

