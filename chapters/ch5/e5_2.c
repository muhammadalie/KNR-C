#include<stdio.h>
void strncate(char *s,char *t,int n);
main()
{
char a[10]="qwert";
char c[5]="zxc39";
char *s=a;
char *t=c;
strncate(a,c,5);
printf("%s\n",a);
}


#include<string.h>
void strncate(char *s,char *t,int n)
{
int l=0,c=0;
c=strlen(s);
s=s+c;
while((l<n)){
	*s++=*t++;
	++l;

}
}

