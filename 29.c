#include<stdio.h>
void main()
{
int hr=0,min;
printf("Enter the minute:");
while(min>60)
{
min=min-60;
hr++;
}
printf("%d\t%d\t",&hr,&min");
}
