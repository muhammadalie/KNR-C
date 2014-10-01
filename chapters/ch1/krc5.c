#include<stdio.h>
main()
{
float c,k;
#define lower 0
#define upper 300
#define step 20
printf("conversion table\n");
for(c=upper;c>=lower;c=c-step)
{
k=c+270;
printf("%.2f\t%.2f\n",c,k);

 }
}
