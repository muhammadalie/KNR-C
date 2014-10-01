#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#define MAXOP 100
#define NUMBER '0'
#define CHARA 'a'
int getop(char []);
void push(double);
double pop(void);
void clear(void);
void ungets(char a[]);
main()
{
	int type,k,m,b,var=0,i;
	double op2,op1,v,a[26];
	char s[MAXOP];
	char f[5]="1234";
	for(i=0;i<26;i++)
		a[i]=0.0;
ungets(f);
	while ((type = getop(s)) != EOF) {
		/*switch (type) {
			case NUMBER:
				push(atof(f));
				break;
			//case CHARA:
			//	push();
			//	break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '/':
				op2 = pop();
				if (op2 != 0.0)
				push(pop() / op2);
				else
				printf("error: zero divisor\n");
				break;
			case '=':
				pop();
				//op1=pop();
				//op2=pop();
				if(var>='a'&&var<='z'){
					 a[var - 'a']=pop();

				}
				else
					printf("no value");
				break;
			case '%':
				k = pop();
				m = pop();
                                if (k != 0.0)
                                push(m % k);
                                else
                                printf("error: zero divisor\n");
                                break;
			//case 'a':
			//	op2=pop();
			//	op1=pop();
			//	push(op2);
			//	push(op1);
			//	break;
			case '?':
				op2=pop();
				printf("\t\n%.8g\n",op2);
				push(op2);
				break;
			//case 'd':
				//clear();
				//break;
			//case '=':
			//	if(type=='a')
				//op1=pop();
				//op2=pop();
			//		push(op2);
			///		push(op1);
				//op1=op2;
				//push(op1);
				//break;
			//case 's':
				push(sin(pop()));
				break;
			//case 'c':
				push(cos(pop()));
				break;
			//case 't':
			//	op2=pop();
			//	op1=(sin(op2)/cos(op2));
			//	push(op1);
			//	break;
			case '\n':
				v=pop();
				printf("\t\n%.8g\n", v);
				break;
			default:
				 if(type>='a'&&type<='z'){
                                       push( a[type -'a']);

                               }
				//else if(type=='v')
				//	push(v);
				else
					printf("error: unknown command %s\n", s);
				break;
 
		}
		var=type;*/
	//}

	printf("%f",atof(s));
	return 0;
}

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

void clear(void)
{
sp=0;
}

#include <ctype.h>
int getch(void);
void ungetch(int);

int getop(char s[])
{
	int i, c,j;
	char a[0];
	while ((s[0] = c = getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	if (!isdigit(c) && c != '.' )
		return c;
		i = 0;
	//if(c>='a'&&c<='z')
	///	//a[j]=s[i];
	//	s[i] = c = getch();
	//	return CHARA;
	if (isdigit(c))
		while (isdigit(s[++i] = c = getch()))
			;
	if (c == '.')
		while (isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	return NUMBER;
}


#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;

int getch(void) 
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}
#include<string.h>
void ungets(char s[])
{	
	int i,j,k=0,m,c;
	i=strlen(s);
	m=i;
	j=strlen(buf);
	while(k<=j){
		s[i]=buf[k];
		++k;
		i++;
	}
	while(i>=0){
		buf[bufp++]=s[i];
		i--;
	}
}

