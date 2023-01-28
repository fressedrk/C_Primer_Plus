/*读取一个浮点数，打印成小数点形式、指数形式和p计数法*/
#include <stdio.h>

int main(void)
{	float num;
	printf("Enter a floating-point value：");
	scanf("%f", &num);
	printf("fixed-point notation:%f\n", num);
	printf("exponential notation:%e\n", num);
	printf("p notation:%a", num);
	return 0;
}