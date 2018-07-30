#include <stdio.h>

int main(void)
{
	const int ROW = 7;
	const char ch = '$';	
	int i, j;
	
	for ( i = 0; i  < ROW; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%c", ch);
		printf("\n");
	}
	
	return 0;
}
	 