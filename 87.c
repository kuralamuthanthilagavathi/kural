#include <stdio.h>

int main(void) 
{
int a,b,rem,gcd;
printf("\n enter the first number:");
scanf("%d",&a);
printf("\n enter the second number:");
scanf("%d",&b);
do
{
rem=a%b;
if(rem==0)
break;
a=b;
b=rem;
}while(rem!=0);
gcd=b;
printf("\n the gcd of the given number is: %d",gcd);
return 0;
}
