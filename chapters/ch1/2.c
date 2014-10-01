#include<stdio.h>
#include <ctype.h>
//int atoi(char s[]);
main()
{
int n,k;
char s[7]="12345\0";
n=atoi(s);

printf("%d",n);
/* atoi: convert s to integer; version 2 */
}
/*int atoi(char s[])
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
