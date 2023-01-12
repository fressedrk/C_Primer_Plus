/*将年龄换成天数，并打印两个值，不考虑闰年*/
#include <stdio.h>

int main(void)
{	int ageyears, agedays; /*年龄的变量和天数的变量*/
	ageyears = 18;
	agedays = 365 * ageyears;
	printf("An age of %d year is %d days.\n", ageyears, agedays);
	return 0;
}