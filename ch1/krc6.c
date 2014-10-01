#include<stdio.h>
main()
{
int c;
c=getchar();

/*printf("%c",c);*/
while(c != EOF){
putchar(c);
c=getchar();}
}
