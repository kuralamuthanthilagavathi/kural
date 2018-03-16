#include<stdio.h>
#include<conio.h>
int main()
{
int l,h,w,area,volume;
printf("Enter the measurements of cuboid:");
scanf("%d%d%d",&l,&h,&w);
area=2lw+2lh+2hw;
printf("%d is the surface area of tha given cuboid.");
volume=l*h*w;
printf("%d is the volume of the cuboid.");
return 0;
}
