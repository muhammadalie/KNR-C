#include<stdio.h>
#include<string.h>
char itob(int n,char s[],int b);
int atoi(char s[]);
main()
{
	int m,i,k,b,n,j;
	char s[10],p,c;
	for(i=0;i<10;++i){
		s[i]='\0';
	}
	printf("enterr the number\n");
	scanf("%d",&n);
	printf("enter the base\n");
	scanf("%d",&b);
	/*for(i=0;i<10;++i){
		s[i]=n%b;
		n=n/b;
		if(n==0)
			break;
	}*/
	//itob(n,s,b);
	//s[i]='\0';
	//for(j=i;j>=0;--j){
		
	//}
	printf("%x",itob(n,s,b));
}

char itob(int n,char s[],int b)
{
 int i,p;
 for(i=0;i<10;++i){
                s[i]=n%b;
                n=n/b; 
        }


}

/*int atoi(char s[])
{
	int i, n, sign;
	for (i = 0; isspace(s[i]); i++);
		sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (n = 0; isdigit(s[i]); i++)
		n = 10 * n + (s[i] - '0');
	return sign * n;
}
*/
