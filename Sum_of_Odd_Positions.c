#include<stdio.h>
int main()
{
    int n,i,arr[100],o=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2)
        {
            o+=arr[i];
        }
    }
    printf("%d",o);
}