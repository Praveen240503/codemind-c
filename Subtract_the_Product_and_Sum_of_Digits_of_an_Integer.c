#include<stdio.h>
int main()
{
	int a,t,sum=0,pro=1;
	scanf("%d",&a);
     while(a>=1 ) 
    {
	 t=a%10;
     a=a/10;
     sum+=t;
	 pro= pro*t; 
    }
    printf("%d",pro-sum);
}