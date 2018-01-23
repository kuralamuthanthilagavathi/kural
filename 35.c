#include<stdio.h>
#include<conio.h>
void main()
{
 int cw=0,i;
 int cc=0;
 char str[20];
 printf("Enter string : ");
 gets(str);
 for(i=0; str[i]!=NULL; i++)
 {
   cc++;
   if(str[i]==' ')
      cw++;
 }
 printf("\nNumber of characters in string : %d",cc);
 printf("\nNumber of words in string : % d",cw+1); 
 getch();
}
