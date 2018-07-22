#include <stdio.h>
#define LEN 40
int main(void)
{
	char name[LEN];
	float height;
	printf("Podaj swoje imie: \n");
	scanf("%s", name);
	
	printf("Podaj swoj wzrost (w cm): \n");
	scanf("%f", &height);
	
	printf("%s, masz %.2f metra wzrostu.\n", name, height / 100.);
	return 0;
}