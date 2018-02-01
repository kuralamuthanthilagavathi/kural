#include<stdio.h>
#define MAX_SIZE 100
int main()
{
int arr[MAX_SIZE];
int i,max,min,size;
printf("Enter the size of the array:");
scanf("%d",&size);
printf("Enter the elements in an array:",size);
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
max=arr[i];
min=arr[i];
for(i=0;i<size;i++)
{
if(max>arr[0])
{
printf("%d is the largesr number",max);
}
if(min<arr[0])
{
printf("%d is the smallest numbe",min);
}
}
return 0;
}
