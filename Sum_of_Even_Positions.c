#include<stdio.h>
int main()
{
    int i,n,arr[100],e=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            e+=arr[i];
        }
    }
    printf("%d",e);
}