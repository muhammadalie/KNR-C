#include <stdio.h>
/* copy input to output; 1st version*/
main()
{
int c,n;
printf("enter a string\n");
c = getchar();
while (c != EOF) 
{
if(c=='\n'){
printf("%d\n",n);
break;
}
++n;

c=getchar();




}


}

