#include<stdio.h>
int main()
{
	int a,i,h,sum =0;
	scanf("%d",&a);
	int temp=a;
	for(i=0;a>0;i++)
	{
		h=a%10;
		a=a/10;
		sum+=h;
	}
	if (temp%sum==0)
	{
		printf("True");
	}
	else {
		printf("False");
	}
	
}