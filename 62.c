#include<stdio.h>
int main()
{
char s;
printf("Enter the strings:");
scanf("%c",&s);
if(s=='0'||s=='1')
printf("Yes, The string having binary representation");
else
printf("No, The string does not having binary representation");
return 0;
}
