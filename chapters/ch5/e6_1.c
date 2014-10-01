#include<stdio.h>
int getlin(char *s,int n);
main()
{
int l;
char a[5];
l=getlin(a,6);
printf("%s\n",a);
printf("%d\n",l);
}


int getlin(char *s,int n)
{
int l=0,c=0;
while((*s++=getchar())!='\n'){
	++l;
	if(l>=n)
		break;
}
*s='\0';
return l;
}

