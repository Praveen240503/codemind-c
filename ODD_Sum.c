#include<stdio.h>
int main()
{
    int i,n,arr[200],o=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            o+=arr[i];
        }
    }
    printf("%d",o);
}