/*提示用户输入姓名，以四种方式打印*/
#include <stdio.h>
#include <string.h>

int main(void)
{	char firstname[40], lastname[40];
	printf("Please enter your first name:\n");
	scanf("%s", firstname);
	printf("Please enter your last name:\n");
	scanf("%s", lastname);
	printf("Hello,\"%s %s\".\n", firstname, lastname);//第一种
	printf("Hello,\"%20s %s\".\n", firstname, lastname);//第二种
	printf("Hello,\"%s %-20s\".\n", firstname, lastname);//第三种
	printf("Hello,%*s %*s.\n", strlen(firstname) + 3, firstname, strlen(lastname) + 3, lastname); //第四种
	return 0;
}