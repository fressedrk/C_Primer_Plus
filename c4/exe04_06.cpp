/*��ӡ��������ĸ��*/
#include <stdio.h>
#include <string.h>

int main(void)
{	char firstname[40], lastname[40];
	printf("Please enter your name:");
	scanf("%s %s", firstname, lastname);
	printf("%s %s.\n", firstname, lastname);
	printf("%*d %*d.\n", strlen(firstname), strlen(firstname), strlen(lastname), strlen(lastname)); //��β����
	printf("%-*d %-*d\n", strlen(firstname), strlen(firstname), strlen(lastname), strlen(lastname)); //��ͷ����
	return 0;
}