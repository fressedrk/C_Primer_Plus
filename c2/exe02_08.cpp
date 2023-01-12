/*调用函数打印内容*/
#include <stdio.h>
void one_three(void);
void two(void);

int main(void)
{	printf("starting now:\n");
	one_three();
	two();
	printf("three\ndone!");
	return 0;
}

void one_three(void)
{	printf("one\n");
}

void two(void)
{	printf("two\n");
}