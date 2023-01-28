/*输入身高和姓名*/
#include <stdio.h>

int main(void)
{	float height, meter;
	char name[40];
	printf("What's your name?");
	scanf("%s", name);
	printf("%s,please enter your height in feet: ", name);
	scanf("%f", &height);
	meter = height * 0.3048;
	printf("%s,you are %.3f feet tall or %f meters.", name, height, meter);
	return 0;
}