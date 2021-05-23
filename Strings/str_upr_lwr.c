/*Program to convert a string into upper or lower case*/
#include<stdio.h>
#include<strings.h>

int main()
{
    char strg[100];
    int op;
    printf("Enter the string:");
    gets(strg);
    printf("\nConvert to \n1.Uppercase\n2.Lowercase:\n");
    scanf("%d",&op);
    if(op==1)
    {
        printf(strupr(strg));
    }
    else
    {
        printf(strlwr(strg));
    }
}
