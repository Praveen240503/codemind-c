#include<stdio.h>
int main()
{
    int n,j,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",i+65);
        }
        printf("
");
    }
}