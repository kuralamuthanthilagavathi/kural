
#include <stdio.h>

void main()
{
 FILE *fp;
 char fn[100];
 char ch;
 int lc, wc, cc;

 lc = 0;
 wc = 0;
 cc = 0;

  printf("Enter a filename :");
  gets(fn);
  
   fp = fopen(fn,"r");

   if ( fp )
   {
	   while ((ch=getc(fp)) != EOF) {
		    if (ch != ' ' && ch != '\n') { ++cc; }
		  
		   if (ch == ' ' || ch == '\n') { ++wc; }
		   		   if (ch == '\n') { ++ln; }
		   


	   }

	   if (cc > 0) {
		++ln;
		++wc;
	   }
    }
   else
      {
         printf("Failed to open the file\n");
        }

    printf("Lines : %d \n", lc);
    printf("Words : %d \n", wc);
    printf("Characters : %d \n", cc);

return(0);
}
