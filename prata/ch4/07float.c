#include <stdio.h>
#include <float.h>

#define LEN 40
int main(void)
{
	float f = 1.0 / 3.0;
	double d = 1.0 / 3.0;

	printf("float: %.4f %.12f %.16f\n", f, f, f);
	printf("double: %.4f %.12f %.16f\n", d, d, d);
	printf("float precission: %d\n", FLT_DIG);
	printf("double precission: %d\n", DBL_DIG);


	return 0;
}