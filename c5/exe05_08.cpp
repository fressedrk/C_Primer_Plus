/*��ģ����*/
#include <stdio.h>

int main(void)
{	int n2, n1, n3;
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand: ");
	scanf("%d", &n2);
	printf("Now enter the first operand: ");
	scanf("%d", &n1);
	while (n1 > 0)
	{	n3 = n1 % n2;
		printf("%d %% %d is %d\n", n1, n2, n3);
		printf("Enter next number for first operand (<=0 to quit): ");
		scanf("%d", &n1);
	}
	printf("Done!\n");
	return 0;
}