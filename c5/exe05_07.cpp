/*����double���͵�������ӡ����ֵ*/
#include <stdio.h>
void cube(double n);

int main(void)
{	double num;
	printf("Please enter a number:");
	scanf("%lf", &num);
	cube(num);
	return 0;
}

void cube(double n)
{	printf("%lf cuded is %lf.\n", n, n * n * n);
}