/*������������ӡ�������ȸ�����10����������*/
#include <stdio.h>

int main(void)
{	int num, i;
	i = 0;
	printf("Please enter a integer number:");
	scanf("%d", &num);
	while (i++ < 11)
	{	printf("%d ", num);
		num++;
	}
	return 0;
}