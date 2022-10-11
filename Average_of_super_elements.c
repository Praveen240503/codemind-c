#include<stdio.h>
int main()
{
    int n,i,arr[100],p,c,j,m=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        if(arr[i]!=-1)
        {
            for(j=0;j<=n;j++)
            {
                if(arr[i]==arr[j] && i!=j)
                {
                    c++;
                    arr[j]=-1;
                }
            }
        }
        if(c==arr[i])
        {
            p+=arr[i];
            m++;
            
        }
        }
        if(m==0)
        {
            printf("-1");
        }
        else
        {
            avg=float(p)/m;
            printf("%.2f",avg);
        }
    
}