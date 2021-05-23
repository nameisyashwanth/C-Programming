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
