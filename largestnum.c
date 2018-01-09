#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enter the numbers:");
scanf("%d%d%",&a,&b,&c);
if(a>b&&a>c)
{
printf("%d is the largest number",a);
}
else
{
printf("%d is the largest number",b);
}
if(c>b)
{
printf("%d is the largest number",c);
}
else
{
printf("%d is the largest number",b);
}
return 0;
}
