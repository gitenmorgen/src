#include <stdio.h>

#define SIZE 8
int main(void)
{
	double tab[SIZE];
	double sum[SIZE];
	double amount = 0;
	int i;

	printf("Podaj %d liczb typu double: ", SIZE);
	for (i = 0; i < SIZE; i++)
		scanf("%lf", &tab[i]);
	/* 
	   sum[0] = tab[0]; for (i = 1 ; i < SIZE; i++) sum[i] = tab[i] + sum[i -
	   1]; 
	*/
	for (i = 0; i < SIZE; i++)
		sum[i] = amount += tab[i];
	
	  for (i = 0; i < SIZE; ++i)
		printf("%4.3g ", tab[i]);
	printf("\n");
	
	for (i = 0; i < SIZE; ++i)
		printf("%4.3g ", sum[i]);
	return 0;
}