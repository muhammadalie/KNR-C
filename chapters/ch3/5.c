#include<stdio.h>
int atoi(char a[]);
int itob(int n,char a[],int b);

main()
{
int i=0,j=0,n=4,b=2,m;
char a[10],c,d[10];
//for(i=0;i<10;i++){
//	a[i]='\0';
//}
/*m=itob(5,a,2);
printf("%d\n",m);
}

*/


//int itob(int n,char a[],int b)
//{
	//int i,p;
	 for(i=0;i<10;++i){
                a[i]=n%b;
		d[j++]=a[i];	
		//printf("%d",a[i]);
                n=n/b; 
        }
printf("%s",d);
//atoi(a);
}

/*
int atoi(char s[])
{
	int i, n, sign;
	for (i = 0; isspace(s[i]); i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (n = 0; isdigit(s[i]); i++)
		n = 10 * n + (s[i] - '0');
	return sign * n;
}
*/
