#include<stdio.h>
#include <ctype.h>
#include<math.h>

float getch(void);
void ungetch(int c);
float getint(float *pn);

/* getint: get next integer from input into *pn */
main()
{
	float pin;

	printf("%f",getint(&pin));

}



//int getch(void);
//void ungetch(int c);
#include<math.h>
float getint(float *pn)
{
	float c, sign,k,m;
	int l=0;
	while (isspace(c = getch()))
	/* skip white space */
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-' && c!='.') {
		ungetch(c); /* it is not a number */
		return 0;
	}
	sign = (c == '-') ? -1 : 1;

	if (c == '+' || c == '-')
		c = getch();

	for (*pn = 0; isdigit(c)||c=='.'; c = getch()){

		if (c=='.'){
			c=getch();
			 while(isdigit(c)){
				l++;
				 *pn = 10 * (*pn) + (c - '0');
				c=getch();
			}
		}
		else{
			*pn = 10 * (*pn) + (c - '0');
		}
	}
	*pn *= sign;
	m=pow(10,-l);
	*pn= (*pn) * m; 
	
	if (c != EOF)
		ungetch(c);
	return *pn;
}

int buf[100];
int bufp=0;
float getch(void)
{
	return(bufp>0)?buf[--bufp]:getchar();
}
void ungetch(int c)
{
	buf[bufp++]=c;

}
