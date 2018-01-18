#include<stdio.h>
void main()
{
int digit=0,n;
printf("Enter the integer:");
scanf("%11d"&n);
while(n!=0)
{
n=n/10;
++digit;
}
printf("Digits are:%d",digit);
}
