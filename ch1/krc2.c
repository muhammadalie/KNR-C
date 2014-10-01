#include<stdio.h>
main()
{
float c=0,k;
float upper,step;
upper=300;
step=20;
printf("conversion table\n");
while(c<=upper)
{
k=c+270;
printf("%.2f\t%.2f\n",c,k);
c=c+step;
 }
}
