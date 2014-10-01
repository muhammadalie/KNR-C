#include<stdio.h>
#include<string.h>
main()
{
	int i=0,lim=10;
	char c,s[15];
	while(i<lim-1){
		if((c=getchar())!='\n'){
			if(c!= EOF){
				s[i]=c;
				++i;
			}
			else{
				i=lim;
			}
		}
		else{
			i=lim;
		}
	}
	printf("%s",s);
}

