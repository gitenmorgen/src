#include <stdio.h>

int main(void)
{
	float speed, size, time;
	
	printf("Podaj predkosc pobierania (w megabitach na sek.): ");
	scanf("%f", &speed);
	
	printf("Podaj wielkosc pliku (w megabajtach): ");
	scanf("%f", &size);
	
	time = 8 * size / speed;
	printf("Przy %.2f megabitow na sekunde plik o rozmiarze %.2f megabajta\nzostanie pobrany w %.2f sekundy\n", speed, size, time);
	return 0;
}
	
	