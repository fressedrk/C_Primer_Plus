/*��ʾ�û����������������ַ�ʽ��ӡ*/
#include <stdio.h>
#include <string.h>

int main(void)
{	char firstname[40], lastname[40];
	printf("Please enter your first name:\n");
	scanf("%s", firstname);
	printf("Please enter your last name:\n");
	scanf("%s", lastname);
	printf("Hello,\"%s %s\".\n", firstname, lastname);//��һ��
	printf("Hello,\"%20s %s\".\n", firstname, lastname);//�ڶ���
	printf("Hello,\"%s %-20s\".\n", firstname, lastname);//������
	printf("Hello,%*s %*s.\n", strlen(firstname) + 3, firstname, strlen(lastname) + 3, lastname); //������
	return 0;
}