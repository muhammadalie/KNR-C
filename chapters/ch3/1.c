#include<stdio.h>
#include<string.h>
main()
{
	int c, k, j,n;

        int i, sign;
	char s[15];
	scanf("\n%d",&n);
        if ((sign = n) < 0) 
                n = -n;
                i = 0;
        do {
                s[i++] = n % 10 + '0'; 
        } while ((n /= 10) > 0);
        if (sign < 0)
                s[i++] = '-';
        s[i] = '\0';
	//int c, i, j;
	for (k = 0, j = strlen(s)-1; k < j; k++, j--) {
		c = s[k];
		s[k] = s[j];
		s[j] = c;
	}
        //reverse(s);

//x=(x>>1);
printf("%s",s);
}
/*void itoa(int n, char s[])
{
	int i, sign;
	if ((sign = n) < 0) 
		n = -n;
		i = 0;
	do {
		s[i++] = n % 10 + '0'; 
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
 	reverse(s);
}
*/
