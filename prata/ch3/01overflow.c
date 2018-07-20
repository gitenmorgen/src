#include  <stdio.h>
#include  <limits.h>
#include <float.h>
int main(void)
{
	int i = INT_MAX;
	int u = UINT_MAX;
	float f = FLT_MAX;
	double dbl = DBL_MAX;
	long double ldbl = LDBL_MAX;

	printf("i = %d ", i);
	printf("d = %u ", u);
	printf("f = %e ", f);
	printf("dbl = %e ", dbl);
	printf("ldbl = %Le \n", ldbl);

	i++;
	u++;
	f = f * 1.1;	
	dbl = dbl + 1.0;
	ldbl = ldbl + 1.0;

	 printf("i = %d ", i);
	printf("d = %u ", u);
	printf("f = %e ", f);
	printf("dbl = %e ", dbl);
	printf("ldbl = %Le ", ldbl);

	return 0;
}