#include <stdio.h>
#include <string.h>
 
void main()
{
    char t[200];
    int sri = 0, i;
 
    printf("enter the string\n");
    scanf("%[^\n]t",t);
    for (i = 0;t[i] != '\0';i++)
    {
        if (t[i] == ' ')
            sri++;    
    }
    printf("number of words in given string are: %d\n", sri + 1);
}
