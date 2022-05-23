#include<stdio.h>
int main()
{
    int i,j,l;
    scanf("%d",&l);
    for(i=1;i<=l;i++)
    {
        for(j=1;j<=l;j++)
        {
            if(j==1||i==j||i==l)
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("
");
    }
}