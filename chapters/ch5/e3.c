#include<stdio.h>
#include<string.h>
void strcate(char *s, char *t);

main()
{
char a[5]="qwere";
char c[5]="123";
char *s=a;
char *t=c;
strcate(s,t);
printf("%s\n",s);
}
void strcate(char *s, char *t)
{int c=0;
c=strlen(s);
s=s+c;
while((*s++=*t++)!='\0' )
	;

}

