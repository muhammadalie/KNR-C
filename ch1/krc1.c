/*kelvin to celsius*/
#include<stdio.h>
main()
{
int c=0,k;
int upper,step;
upper=300;
step=20;
while(c<=upper)
{
k=c+270;
printf("%d\t%d\n",c,k);
c=c+step;
 }
}
