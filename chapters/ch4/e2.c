#include<stdio.h>
double atof(char s[]);
main()
{
	int  i=0;
	char s[10],c;
	while((c=getchar())!=EOF&&c!='\n'){
		s[i]=c;
		++i;
	}
	printf("%f",atof(s));
}



double atof(char s[])
{
	double val, power;
	int i, sign,exp;
	for (i = 0; isspace(s[i]); i++) /* skip white space */
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10;
	}
	val=sign * val / power;
	if (s[i]=='e')
		sign=(s[++i]=='-')? -1:1;
	++i;
	for (exp = 0.0; isdigit(s[i]); i++)
                exp = 10.0 * exp + (s[i] - '0');
	if(sign==1)
		while(exp-->0)
			val=val*10;
	else
		while(exp-->0)
			val=val/10;

return val;
}
