/*分钟转换成小时和分钟表示*/
#include <stdio.h>
#define MIN_PER_HOUR 60

int main(void)
{	int min, hour, left;
	printf("Please enter the minutes (<=0 to quit):");
	scanf("%d", &min);
	while (min > 0)
	{	hour = min / MIN_PER_HOUR;
		left = min % MIN_PER_HOUR;
		printf("%d minutes is %d hour ,%d minutes.\n", min, hour, left);
		printf("You can enter again:");
		scanf("%d", &min);
	}
	printf("Done!\n");
	return 0;
}