#include<stdio.h>
int  stren(char *s,char *t);

main()
{int k=0;
char a[6]="qwerer";
char c[6]="werer";
char *s=a;
char *t=c;
k=stren(s,t);
printf("%d\n",k);
}
#include<string.h>
int  stren(char *s,char *t)
{int l=0,c=0,k=0;
c=strlen(s);
k=strlen(t);
s=(s+c-k);
for(;(*s==*t)&*t!='\0';s++,t++)
	l++;
if(l==k)
	return 1;
else 
	return 0;
}
