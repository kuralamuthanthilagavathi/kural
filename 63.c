#include<stdio.h>
int main()
{
int count=0,i;
char s[30];
printf("Enter the sentence:");
scanf("%c",&s);
for(i=0;i<=30;i++)
{
if(s[i]=='\t')
{
count=count+1;
printf("%d",count);
}
}
return 0;
}
