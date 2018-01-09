#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Enter the year:");
scanf("%d",&a);
if(a%400==0)
{
printf("%d year is leap year",a);
}
else
if(a%100==0)
{
printf("%d year is not a leap year",a);
}
else 
if(a%4==0)
{
printf("%d year is a leap year",a);
}
else
printf("%d is not a leap year",a);
}
