#include  <stdio.h>

int main(void)
{
	char ch;
	printf("Podaj kod ASCII (np 65):");
	scanf("%d", &ch);
	printf("Kod ASCII <%d> to znak \"%c\"\n", ch, ch);
	return 0;
}