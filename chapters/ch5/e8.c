#include<stdio.h>
void stcpy(char *t, char *s);
int ddy(int year, int month, int day);
void mdy(int year, int yearday, int *pmonth, int *pday);

main()
{
int a[3];
int s[3];
int* t;
int l=1992,n=365,m=12,d=31,k;
mdy(l, n, a, s);
k=ddy(l, m, d);


printf("%d / %d / %d \n",*s,*a,l);
printf("\n  %d \n",k);
}

static char daytab[2][13] = {
{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};
/* day_of_year: set day of year from month & day */
int ddy(int year, int month, int day)
{
	int i, leap,c,k;
	leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	c=month;
	k=((day<32&&(c==1||c==3||c==5||c==7||c==8||c==10||c==12))||
		(day<31&&(c==4||c==6||c==9||c==11))||(day<30&&(c==2)&&leap==1)||(day<29&&(c==2)&&leap==0));
	if(k==1){
	for (i = 1; i < month; i++)
		day += daytab[leap][i];
	return day;
	}
	else{
	printf("ERROR\n");
	return 0;
	}
}
/* month_day: set month, day from day of year */
void mdy(int year, int yearday, int *pmonth, int *pday)
{
	int i, leap;

		leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	  if((yearday<367)&&(leap==1)||(yearday<366)&&(leap==0)){

		for (i = 1; yearday > daytab[leap][i]; i++){
			yearday -= daytab[leap][i];
		}
		*pmonth = i;
		*pday = yearday;
	}
	else{
		 printf("ERROR\n");
                 *pmonth =0;
                 *pday =0 ;


	}

}
