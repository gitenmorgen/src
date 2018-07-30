#include <stdio.h>

int main(void)
{
	const int MAX = 26;
	int i;	
	char letters[MAX];
	
	
	for (i = 0; i  < MAX; i++)
		letters[i] = 'a' + i;
		
	for (i = 0; i  < MAX; i++)
		printf("%c ", letters[i]);
	
	printf("\nKoniec\n");
	return 0;
}