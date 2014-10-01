#include<stdio.h>
void squeeze(char s[],int c);
main()
{
	int i=0,n,j=0,ln=0,m,ch;
	char a[50],c,k[50],b[50];
	while((c=getchar())!=EOF ){
		a[i]=c;
		++i;
		if(c=='\n'){
			while((c=getchar())!=EOF){
				k[j]=c;
				++j;
			}
		}

	}

	a[i]='\0';
	k[j]='\0';
	ch=0;
        for (i=n=0; a[i] != '\0'; i++){
		for(j=0;(k[j]!='\0')||j<50;j++){
			if (a[i] == k[j]){
				++ch;
				
			}
		}
		if(ch==0){
			a[n++]=a[i];
			
		}
		ch=0;
			
	}
	a[n]='\0';
	printf("\n");
	printf("%s",a);



}
