#include  <stdio.h>

int main(void)
{
	float f;
	printf("Podaj liczbe float:");
	scanf("%f", &f);
	printf("Podana liczba to %f lub %e lub %a\n", f, f, f);
	return 0;
}