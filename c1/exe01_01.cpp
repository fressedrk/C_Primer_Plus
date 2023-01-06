#include <stdio.h>

int main()
{	float inch, cm;
	printf("Please enter a number in inch:");
	scanf("%f", &inch);
	cm = 2.54 * inch;
	printf("the number is %f inch\nthe number is %f cm", inch, cm);
	return 0;
}