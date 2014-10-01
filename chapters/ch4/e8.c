#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#define MAXOP 100
//#define NUMBER '0'
int getop(char []);
void push(double);
double pop(void);
main()
{
	int type,k,m,v=0,i;
	double op2,op1,a[26];
	char s[MAXOP],b;
	for(i=0;i<26;i++)
		a[i]=0.0;
	while ((type = getop(s)) != EOF) {
		switch (type) {
			case 4:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '-':
				op1=pop();
				push(pop() - op1);
				break;
			case '=':
				pop();
				if(v>='a'&&v<='z')
					a[v - 'a']=pop();
				else
					printf("no value");
				break;

			case '\n':
				printf("\t\n%.8g\n",pop());
				break;
			default:
				(type>='a'&&type<='z')?push(a[type - 'a']):printf("error: unknown command %s\n", s);
				break;
		}
		v=type;
	}
	return 0;
}



#define MAXVAL 100
int sp = 0;
double val[MAXVAL];

void push(double f)
{
	if (sp < MAXVAL){
		val[sp++] = f;
	}
	else
		printf("error: stack full, can't push %g\n", f);
}

double pop(void)
{
	if (sp > 0)
		return val[--sp];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}
#include <ctype.h>
int getch(void) ;
void ungetch(int c);
int getop(char s[])
{
	int i, c,j;
	char a[0];
	while ((s[0] = c = getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c;
		i = 0;
	while(isdigit(c))
		s[++i] = c = getch();
	if (c == '.')
		while (isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if(c!=EOF)
		ungetch(c);
	return 4;
}


#define BUFSIZE 100
char buf[BUFSIZE];
int bufp=0;
int getch(void) ;
void ungetch(int c);
int getch(void) 
{
	int c;
	if(bufp != 0)
		c= bufp;
	else 
		c=getchar();
		bufp=0;
	return c;
	}
void ungetch(int c)
{
	if (bufp!=0)
		printf("ungetch: too many characters\n");
	else
		bufp= c;
}
