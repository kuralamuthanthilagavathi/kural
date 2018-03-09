#include<stdio.h>
#include<string.h>
void main()
{
    char ch[100];
    gets (ch);
    int k,i;
    k=strlen(ch);
    if(k%2!=0)
    {
        ch[(k-1)/2]='*';
    }
    else
    {
        ch[k/2]='*';
    }
    printf("%s",ch);
    }
