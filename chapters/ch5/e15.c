
#include <stdio.h>
#include <string.h>

#define MAXLINES 5000     
char *lineptr[MAXLINES];  

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsorts(void *lineptr[], int left, int right,
            int (*comp)(void *, void *), int order);
            
int numcmp(char *, char *);
int strcmps(char *t ,char *s );

/* sort input lines */
int main(int argc, char *argv[])
{
	int nlines;        
	int numeric = 0;   
	int reverse = 0;   
	int fold = 0;

    	while (--argc > 0)
    	{
		if (strcmp(*++argv, "-n") == 0)
            		numeric = 1;
        	else if (strcmp(*argv, "-r") == 0)
          		reverse = 1;
		else if (strcmp(*argv,"-f") == 0)
			fold = 1;
    }
    
    if ((nlines = readlines(lineptr, MAXLINES)) >= 0)
    {
        qsorts((void **) lineptr, 0, nlines-1,
            (int (*)(void *, void *))((numeric) ? (int*)numcmp : fold ? (int*)strcmps: (int*)strcmp), reverse ? -1 : 1);
        writelines(lineptr, nlines);
        return 0;
    }
    else
    {
        printf("input too big to sort\n");
        return 1;
    }
    
    return 0;
}

#define MAXLEN 1000  /* max length of any input line */

int getlines(char *, int);
char *alloc(int);

int readlines(char *lineptr[], int maxlines)
{
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while ((len = getlines(line, MAXLEN)) > 0)
        if (nlines >= maxlines || (p = alloc(len)) == NULL)
            return -1;
        else
        {
            line[len-1] = '\0';  
            strcpy(p, line);
            lineptr[nlines++] = p;
        }

    return nlines;
}


void writelines(char *lineptr[], int nlines)
{
    int i;

    for (i = 0; i < nlines; i++)
        printf("%s\n", lineptr[i]);
}


int getlines(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';

    return i;
}

#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;
char *alloc(int n)
{
    if (allocbuf + ALLOCSIZE - allocp >= n)  /* it fits */
    {
        allocp += n;
        return allocp - n;  /* old p */
    }
    else    /* not enough room */
        return 0;
}

#include <stdlib.h>

/* numcmp:  compare s1 and s2 numerically */
int numcmp(char *s1, char *s2)
{
    double v1, v2;

    v1 = atof(s1);
    v2 = atof(s2);
    if (v1 < v2)
        return -1;
    else if (v1 > v2)
        return 1;
    else
        return 0;
}

/* my_qsort:  sort v[left]...v[right] */
void qsorts(void *v[], int left, int right,
            int (*comp)(void *, void *), int order)
{
    int i, last;

    void swap(void *v[], int, int);

    if (left >= right)
        return;
    swap(v, left, (left + right)/2);
    last = left;
    for (i = left+1; i <= right;  i++)
        if (order * (*comp)(v[i], v[left]) <0)
            swap(v, ++last, i);
    swap(v, left, last);
    qsorts(v, left, last-1, comp, order);
    qsorts(v, last+1, right, comp, order);
}

void swap(void *v[], int i, int j)
{
    void *temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int strcmps(char *s, char *t)
{
	int i;
	for (i = 0; s[i]==t[i]; i++)
		if (s[i] == '\0')
			return 0;
	return toupper(s[i]) - toupper(t[i]);
}
