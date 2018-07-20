#include  <stdio.h>

int main(void)
{
	float height;
	float inch;
	printf("Podaj swoj wzrost (cm): ");
	scanf("%f", &height);
	inch = height / 2.54f;
	printf("Twoj wzrost to %.2f cali, %.2f cm.\n", inch, height);
	return 0;
}