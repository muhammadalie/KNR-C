#include <stdio.h>
#define swap(t,x,y) {t temp; temp = x;x = y ;y=temp;}
//#define dprint(expr) printf(#expr " = %g\n", expr)
main()
{int x=4,y=5,t;
swap(int,x,y);
printf("%d\n%d\n",x,y);
}
