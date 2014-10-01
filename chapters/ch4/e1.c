#include<stdio.h>
int  strindex(char s[],char t[]);

main()
{
	char s[6]={'b','c','b','c','b','\0'};
	char t[3]={'b','d','\0'};
	printf("%d",strindex(s,t));
}


int  strindex(char s[],char t[])
{
	int i,j,k,ln;
	ln=-1;
	for(i=0;s[i]!='\0';i++){
		for(j=i,k=0;t[k]!='\0'&&s[j]==t[k];j++,k++){
			;
		}
		if(k>0&&t[k]=='\0'){
			ln=i;
		}
	}
	return ln;
}
