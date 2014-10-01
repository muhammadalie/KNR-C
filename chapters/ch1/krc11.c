#include <stdio.h>
#define IN 1
#define OUT 0
/* word count*/
main()
{
int c, nl, nw, nc, state;
printf("enter the string and press SPACE then /+ENTER\n");
state = OUT;
nl = nw = nc = 0;
while ((c = getchar()) != EOF) {

if (c == ' ' || c == '\n' || c == '\t')
{state = OUT;}
else if (state == OUT) {
state = IN;
++nw;

}
if(c== '/'){
printf("%d\n",nw-1);
break;}}}



