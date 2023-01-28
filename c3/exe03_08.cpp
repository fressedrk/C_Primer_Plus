#include <stdio.h>
#define CUP_PER_PINT 2
#define OUNCE_PER_CUP 8
#define BIGSPOON_PER_OUNCE 2
#define TEASPOON_PER_BIGOUNCE 3

int main()
{	double pint, ounce, cup, bigspoon, teaspoon, bigounce;
	printf("Please enter a number of cups:");
	scanf("%lf", &cup);
	pint = cup / CUP_PER_PINT;
	ounce = cup * OUNCE_PER_CUP;
	bigspoon = ounce * BIGSPOON_PER_OUNCE;
	teaspoon = bigspoon * TEASPOON_PER_BIGOUNCE;
	printf("%g cup equal to %g pint %g ounce %g bigspoon %g teaspoon\n", cup, pint, ounce, bigspoon, teaspoon);
	return 0;
}