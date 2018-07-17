#include <stdio.h>

unsigned int strlen(const char *);
char * strinv(char *);	// invert string
char * strinv2(char *); 

int main(int argc, char **argv)
{
   char str[] = "Hello Git";
	printf("%s has a %d characters.\n",
	str, strlen(str));
	strinv2(str);
	printf("%s", str);
	return 0;
}

unsigned int strlen(const char *s)
{
	unsigned int len = 0;
	while(*s++)
		len++;
	return len;
}

char * strinv(char *s)
{
	char tmp;
	unsigned int len = strlen(s);
	int i, j;
	for (i = 0, j = len-1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
	return s;
}

char * strinv2(char *s)
{
	char tmp;
	char *first, *last;
	first = last = s;
	
	while( *last++); // wskazuje za '\0'
	last -= 2;
	while(first < last)
	{
		tmp = *last;
		*last-- = *first;
		*first++ = tmp;
	}
	return s;
}
	
	
	