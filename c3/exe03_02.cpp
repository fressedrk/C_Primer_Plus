/*提示输入ASCII码值，打印相对于字符*/
#include <stdio.h>

int main(void)
{	char ch;
	printf("Please enter a ASCII value:");
	scanf("%d", &ch);
	printf("%c", ch);
	return 0;
}