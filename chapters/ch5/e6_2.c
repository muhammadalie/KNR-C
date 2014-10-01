#include<stdio.h>
int getlin(char *t);
main()
{
//int l=0;
char a[3]="546";
printf("%d\n",getlin(a));
}


int getlin(char *t)
{
int l=0;
int n=0;
while((*t>='0'&&*t<='9')){
	n = n * 10 + *t-'0' ;
	t++;

}
return n;
}

