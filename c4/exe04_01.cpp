/*�����û���������������ӡ*/
#include <stdio.h>

int main(void)
{	char firstname[40], lastname[40];
	printf("Please enter your first name:\n");
	scanf("%s", firstname);
	printf("Please enter your last name:\n");
	scanf("%s", lastname);
	printf("Hello,%s,%s��", firstname, lastname);
	return 0;
}