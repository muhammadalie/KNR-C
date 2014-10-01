#include <stdio.h>
main()
{
int c,n=0,k=0;

while ((c = getchar()) != EOF)
 {

 if(c=='\n')
  {
   for(k=0;k<n;k++)
   {

   printf("|");
   }
  printf("\n");
break;
  }
++n;

}

}
