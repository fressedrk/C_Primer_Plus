/*天数转换成周数和天数*/
#include <stdio.h>
#define DAY_PER_WEEK 7

int main(void)
{	int week, day, left;
	printf("Please enter the days:");
	scanf("%d", &day);
	while (day > 0)
	{	week = day / DAY_PER_WEEK;
		left = day % DAY_PER_WEEK;
		printf("%d days are %d weeks,%d days.\n", day, week, left);
		printf("Please enter the days again:");
		scanf("%d", &day);
	}
	return 0;
}