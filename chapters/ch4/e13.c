#include<stdio.h>
void reverse(char a[]);
main()
{
	int i=0;
	char c,a[10],m,b[10];
	while((c=getchar())!=EOF&&c!='\n'){
		a[i]=c;
		i++;
	}
	a[i]='\0';
	reverse(a);
	printf("%s",a);
	
}
#include<string.h>
void rev(char s[],int i);
void reverse(char s[])
{
rev(s,0);
}
void rev(char s[],int i)
{
	int c,j;
	j=(strlen(s)-(i+1));
	if(i<j){
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		++i;
		rev(s,i);
	}
}
