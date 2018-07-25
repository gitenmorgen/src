#include <stdio.h>
#define DAYS_IN_WEEK	7	

int main(void)
{
	int days;
	int d, w;
	
	printf("Podaj liczbe dni (<= 0 - koniec): ");
	scanf("%d", &days);
	while ( days > 0 )
	{
		w = days / DAYS_IN_WEEK;
		d = days % DAYS_IN_WEEK;
		printf("%d dni to %d tygodnie, %d dni\n", days, w, d);
		printf("Podaj liczbe dni (<= 0 - koniec): ");
	scanf("%d", &days);
	}
	printf("Koniec\n");
		return 0;
}