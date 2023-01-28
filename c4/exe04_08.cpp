#include <stdio.h>
#define LITER_PER_GALLON 3.785
#define KM_PER_MILE 1.609

int main(void)
{	float mile, gallon, mile_per_gallon, liter_per_100km;
	printf("Please enter the mile of trip and the amount of gas consumed(gallon): ");
	scanf("%f,%f", &mile, &gallon);
	mile_per_gallon = mile / gallon;
	liter_per_100km = (mile * KM_PER_MILE) / (gallon * LITER_PER_GALLON);
	printf("mile_per_gallon = %.1f ,liter_per_100km = %.1 f.", mile_per_gallon, liter_per_100km);
	return 0;
}