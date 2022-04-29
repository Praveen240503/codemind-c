#include<stdio.h>
int main()
{
    int n,i,r,sum=0,fact,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        fact=1,i=1;
        r=n%10;
        while(i<=r)
        {
            fact = fact*i;
            i++;
        }
        sum=sum +fact;
        n= n/10;
    }
    if(sum==temp)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}