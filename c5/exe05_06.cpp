/*addemup.c--几种常见的语句*/
//更改成计算输入天数内所赚钱总数
//更改每天钱数为平方
#include <stdio.h>

int main(void)   //计算前20个整数的和
{	int count, sum, day;
	count = 0; //表达式语句
	sum = 0;   //表达式语句
	printf("Please enter the days:");
	scanf("%d", &day);
	while (count++ < day)  //迭代语句
	{	sum = sum + count * count;
	}
	printf("sum = %d\n", sum); //表达式语句
	return 0;               //跳转语句
}