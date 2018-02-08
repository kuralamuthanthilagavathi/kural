#include<stdio.h>
int main()
{
int x,y;
printf("Enter the two different numbers:");
scanf("%d %d",&x,&y);
printf("before swapping the numbers are x=%d and y=%d",x,y); 
x=x^y;
y=x^y;
x=x^y;
printf("\nAfter the swapping the numbers are x=%d and y=%d",x,y);
return 0;
}
