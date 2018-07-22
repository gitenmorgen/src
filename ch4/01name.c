#include <stdio.h>
#define LEN 40
int main(void)
{
	char name[LEN];
	char sname[LEN];
	
	printf("Podaj swoje imie: ");
	scanf("%s", name);
	printf("Podaj swoje nazwisko: ");
	scanf("%s", sname);
	
	printf("%s, %s\n", sname, name);
	
	return 0;
}