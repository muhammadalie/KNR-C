#include <stdio.h>
#include <string.h>
#define MAXLINE 1000
int getlines(char *line, int max);
main(int argc, char *argv[])
{
	char line[MAXLINE],a[1000][1000];
	int i=0,j=0,n,k=0;
		while (getlines(line, MAXLINE) >0) {
			j=0;
			while((a[i][j]=line[j])!='\0')
				j++;
			i++;
		}
		n=atoi(argv[3]);
		if(argc>0)
               		if(*argv[3])
				while(0<n){
					k=i-n;
               				printf("%s\n",a[k]);
					n--;
				}
}


int getlines(char s[],int lim)
{
        int c, i;
        for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
                s[i] = c;
        if (c == '\n') {
                s[i] = c;
                ++i;
        }
        s[i] = '\0';
        return i;
}


