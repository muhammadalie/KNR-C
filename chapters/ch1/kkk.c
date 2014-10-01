#include <stdio.h>
#define OUT 0
#define IN 1
/* PRINT CLM*/
main()
{
char c,state,n,k;
state=OUT;
n;
printf("enter the string\n ");


while ((c = getchar()) != EOF) {


if(c==' '||c=='\n'||c=='\t')
{state=OUT;
/*printf("\n");*/}

else if (state==OUT)
{
printf("\n");
state=IN;
++n;

}


printf("|");
}}


