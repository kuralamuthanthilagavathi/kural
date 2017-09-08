#include<stdio.h>
void main()
{
char s;
printf("enter the character:");
scanf("%c",&s);
if(s>='a'&&s<='z'//s>='A'//s<='Z')
{
printf("%c is a alphabet",&s);
}
else
{
printf("%c is not a alphabet:",&s);
}
}
