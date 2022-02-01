#include<stdio.h>
int main() 
{
    
int l, b, w, c, p, q, f;
scanf("%d%d%d%d",&l,&b,&w,&c);
p=l-2*w;
q=b-2*w;
f=((l*b) -(p*q))*c;
if(p<=0||q<=0) 
       printf("Impossible") ;
else
      printf("%d", f) ;
}