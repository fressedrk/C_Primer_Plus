/*���뻪���¶��Զ��庯��ת���������¶ȺͿ����¶�*/
#include <stdio.h>
void Temperatures(double n);

int main(void)
{	double F;
	printf("Please enter a temperature in Fahrenheit: ");

	while ((scanf("%lf", &F)) == 1)
	{	Temperatures(F);
		printf("Please enter a temperature in Fahrenheit again(!=0 to quit): ");
	}
	printf("Bye!\n");
	return 0;
}

void Temperatures(double n)
{	double C, K;
	C = 5.0 / 9.0 * (n - 32.0);
	K = n + 273.16;
	printf("%.3lf �H is %.3lf �� or %.3lf K.\n", n, C, K);
}