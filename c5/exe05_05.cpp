/*addemup.c--���ֳ��������*/
//���ĳɼ���������������׬Ǯ����
#include <stdio.h>

int main(void)   //����ǰ20�������ĺ�
{	int count, sum, day;
	count = 0; //����ʽ���
	sum = 0;   //����ʽ���
	printf("Please enter the days:");
	scanf("%d", &day);
	while (count++ < day)  //�������
	{	sum = sum + count;
	}
	printf("sum = %d\n", sum); //����ʽ���
	return 0;               //��ת���
}