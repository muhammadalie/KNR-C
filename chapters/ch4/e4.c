#include <stdio.h>
#include <stdlib.h> 
#define MAXOP 100
#define NUMBER '0'
int getop(char []);
void push(double);
double pop(void);
void clear(void);
main()
{
	int type,k,m;
	double op2,op1;
	char s[MAXOP];
	while ((type = getop(s)) != EOF) {
		switch (type) {
			case NUMBER:
				push(atof(s));
				break;
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
			case '%':
				k = pop();
				m = pop();
                                if (k != 0.0)
                                push(m % k);
                                else
                                printf("error: zero divisor\n");
                                break;
			case '?':
				op2=pop();
				printf("\t\n%.8g\n",op2);
				push(op2);
				break;
			case 'c':
				clear();
				break;
			case 's':
				op2=pop();
				op1=pop();
				push(op2);
				push(op1);
				break;
			case '\n':

				printf("\t\n%.8g\n", pop());
				break;
			default:
				printf("error: unknown command %s\n", s);
				break;
		}
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
void clear(void)
{
sp=0;
}

#include <ctype.h>
int getch(void);
void ungetch(int);

int getop(char s[])
{
	int i, c;
	while ((s[0] = c = getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c;
		i = 0;

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
