#include <stdio.h>
/* word count*/
main()
{
int c,n;
printf("enter a string\n");
n=0;
c = getchar();

while (c != EOF) 
{

c=getchar();




if (c=='\n'){
printf("%d\n",n+1);
break;}

if(c==' '){

++n;
}


}

}

