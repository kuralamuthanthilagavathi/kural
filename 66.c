#include<stdio.h>
int i,p=0,n;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
++p;
}
}
if(p==2)
{
printf("It is a prime number");
}else 
{printf("It is not a prime number");
}
return 0;
}
