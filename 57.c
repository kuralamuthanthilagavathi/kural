#include<stdio.h>
int main()
{
int i,j,temp;
printf("Enter the first number:");
scanf("%d",&i);
printf("Enter the second number:");
scanf("%d",&j);
temp=i;
i=j;
j=temp;
printf("%d %d",i,j);
return 0;
}
