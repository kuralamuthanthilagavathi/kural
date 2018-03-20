#include <stdio.h>

int main(void) 
{
int x,y,rem,lcm,gcd,a,b;
printf("\n enter the first number:");
scanf("%d",&x);
printf("\n enter the second number:");
scanf("%d",&y);
a=x;
b=y;
do
{
rem=x%y;
if(rem==0)
break;
x=y;
y=rem;
}while(rem!=0);
gcd=y;
lcm=(a*b)/gcd;
printf("\n the lcm of the given number is: %d",lcm);
return 0;
}
