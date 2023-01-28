/*提醒用户输入姓名，并打印*/
#include <stdio.h>

int main(void)
{	char firstname[40], lastname[40];
	printf("Please enter your first name:\n");
	scanf("%s", firstname);
	printf("Please enter your last name:\n");
	scanf("%s", lastname);
	printf("Hello,%s,%s。", firstname, lastname);
	return 0;
}