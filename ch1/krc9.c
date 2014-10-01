#include <stdio.h>
/* copy input to output; 1st version*/
main()
{
int c,n;
printf("enter a string\n");
n=0;
c = getchar();
while (c != EOF) 
{

c=getchar();

if(c=='\n'){
++n;
}
if (c=='\t'){
printf("%d\n",n);
break;}


}


}

