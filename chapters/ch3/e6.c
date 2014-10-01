#include<stdio.h>
#include<string.h>
char itob(int n,char s[],int b);

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
	for(i=0;i<10;++i){
		s[i]=n%b;
		n=n/b;
		if(n==0)
			break;
	}
	for(j=i;j>=0;--j){
		printf("%X",s[j]);
	}
	printf("\n");
}
