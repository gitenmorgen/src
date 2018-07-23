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
	printf("Cena to %0.2f dukatow", 121.123);
	return 0;
}