/*�û��������䣬��ʾ�����Ӧ������*/
#include <stdio.h>
#define SEC_PER_AGE 3.156e7

int main(void)
{	int age;
	double second;
	printf("Please enter your age:");
	scanf("%d", &age);
	second = SEC_PER_AGE * age;
	printf("The second of %d age is %e", age, second);
	return 0;
}