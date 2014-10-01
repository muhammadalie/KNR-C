#include<stdio.h>
void strncp(char *s,char *t,int n);
main()
{
char a[5]="qwert";
char c[4]="zxc3";
char *s=a;
char *t=c;
strncp(s,t,2);
printf("%s\n",s);
}
void strncp(char *s,char *t,int n)
{
int l=0;
while((l<n)){
	*s++=*t++;
	++l;
}
}

