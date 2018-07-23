#include <stdio.h>
#define MILE_IN_KM 1609
#define GAL_IN_LIT 3785

int main(void)
{
	float mile, gallon;
	float km, liter;

	printf("Podaj liczbe przebytych mil: ");
	scanf("%f", &mile);
	printf("Podaj liczbe zuzytych galonow: ");
	scanf("%f", &gallon);

    km = miles * MILE_IN_KM;
	liter = gallons * GAL_IN_LIT;

	printf("Zuzycie paliwa wynosi %.1f MPG\n", miles / gallons);
	 printf("Zuzycie paliwa wynosi %.1f l/100km\n", (liter / km) * 100.0);

	return 0;
}