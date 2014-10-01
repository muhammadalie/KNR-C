/*using for loop*/
#include<stdio.h>
main()
{
float c,k;
float upper,step;
upper=300;
step=20;
printf("conversion table\n");
for(c=0;c<=upper;c=c+step)
{
k=c+270;
printf("%.2f\t%.2f\n",c,k);

 }
}
