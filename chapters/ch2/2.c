#include<stdio.h>
#include<ctype.h>
main()
{
	int i=0,m,n,j,k;
	char c,a[i];
	while((c=getchar())!=EOF && c!='\n'){
		toupper(c);
		a[i]=c;
		i++;

	}
	a[i]='\0';
	 n=0;
	for(j=0;j<i;j++){
		if(a[j]>='0' && a[j]<='9'){
			m=a[j]-'0';
		}
		else if(a[j]>='a' && a[j]<='f'){
			m=a[j]-'0';
			m=m-39;
		}
		n=n*16+m;
	}
		printf("%d",n);
}

/*int htoi(char a[])
{
	int n,j,m,k;

  	n=0;
        for(j=0;k=1;j++){
                if(a[j]>='0' && a[j]<='9'){
                        m=a[j]-'0';
                }
                else if(a[j]>='a' && a[j]<='f'){
                        m=a[j]-'0';
                        m=m-39;
                }
		else{
		k=0;
		}
		if(k==1){
                	n=n*16+m;
        	}
	}

	return n;
}

*/
