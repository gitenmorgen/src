#include  <stdio.h>

int main(void)
{
	float mparticle = 3.0e-23;	// masa jednej czasteczki wody
	float vol;					// objetosc
	float nparticles;			// liczba czastek
	printf("Podaj objetosc wody w litrach: ");
	scanf("%f", &vol);
	nparticles = vol * 1000 / mparticle;
	printf("W %.2fL wody znajduje sie %e czasteczek wody\n", vol, nparticles);
	return 0;
}