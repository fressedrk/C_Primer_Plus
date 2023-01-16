/*用户输入水的夸脱数，显示水分子数量*/
#include <stdio.h>
#define MASS_PER_QUART 950
#define MASS_PER_MOLE 3.0E-23

int main(void)
{	double quart, molecules;
	printf("Enter a quart for water:");
	scanf("%lf", &quart);
	molecules = quart * MASS_PER_QUART / MASS_PER_MOLE;
	printf("%lf quart water has %e molecules.\n", quart, molecules);
	return 0;
}