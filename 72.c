#include<stdio.h>
int main()
{
    char s[10];
    int i;
    printf("Enterthe string:");
    gets(s);
    for(i=1;i<=10;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            printf("YES");
        }
        else
        {
        printf("NO");
        break;
        }
    }
    return 0;
}
