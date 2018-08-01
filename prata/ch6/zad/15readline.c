#include <stdio.h>
#include  <string.h>

#define SIZE 256

int main(void)
{
	char buf[SIZE];
	char ch;
	int i;
	
	printf("Wprowadz tekst max %d znakow: ", SIZE - 1);	
	i = 0;
	scanf("%c", &ch);
	while (ch != '\n')
	{
		buf[i++] = ch;
		scanf("%c", &ch);
	}
	buf[i] = '\0';
	
	while (i--)
		putchar(buf[i]);
	
	printf("\n%d %s\n", strlen(buf), buf);
	printf("Koniec\n");
	return 0;
}
	
	
	
