#include<stdio.h>
int main()
{
char str;
printf("Enter the string:");
scanf("%c",&str);
printf("Is the string containing alphabets and numbers:");
if(str>='A' && str<='Z' && str>='0' && str<='9' || str>='a' && str<='z' && str>='0' && str<='9')
{
printf("YES");
}
else
{
printf("NO");
}
return 0;
}
