/*输入浮点数，以小数点和指数法打印*/
#include <stdio.h>

int main(void)
{	float num;
	printf("Please enter a float-pointing number: ");
	scanf("%f", &num);
	printf("The input is %f or %e.\n", num, num);
	printf("The input is %+f or %E.\n", num, num);
	return 0;
}