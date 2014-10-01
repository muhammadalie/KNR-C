#include <stdio.h>
#include <stdlib.h> 
#define MAXOP 100
void push(double);
double pop(void);
/* reverse Polish calculator */
main(int argc,char *argv[])
{
	int i=1;
	double op2;
	char s[MAXOP],c;
	while(--argc>0){
		switch (*argv[i]) {
		case '+':
			push((pop()) + (pop()));
			break;
		case 'x':
			//printf("hello");
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
		default:
			push(atof(argv[i]));
			break;
		}
		++i;
	}
	printf("\t%f\n",pop());
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
	if (sp> 0)
		
		return val[--sp];
	else {
		printf("error: stack empty\n");
	return 0.0;
	}
}



