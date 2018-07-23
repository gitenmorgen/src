#include <stdio.h>
#include <string.h>

#define LEN 40
int main(void)
{
	char name[LEN];
	char sname[LEN];
	int name_len, sname_len;

	printf("Podaj swoje imie: ");
	scanf("%s", name);
	printf("Podaj swoje nazwisko: ");
	scanf("%s", sname);

	name_len = strlen(name);
	sname_len = strlen(sname);
	
	printf("%s %s\n", name, sname);
	printf("%*d %*d\n", name_len, name_len, sname_len, sname_len);

	printf("%s %s\n", name, sname);
	 printf("%-*d %-*d\n", name_len, name_len, sname_len, sname_len);

	return 0;
}