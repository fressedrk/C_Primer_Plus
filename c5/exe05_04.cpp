/*�������(cm)ת����Ӣ�ߺ�Ӣ�粢��ӡ*/
#include <stdio.h>
#define INCH_PER_FOOT 12
#define CM_PER_FOOT 30.48

int main(void)
{	float inch, foot, cm;
	int feet;//Ӣ����������
	printf("Please enter your height in centimeters:");
	scanf("%f", &cm);
	while (cm > 0)
	{	foot = cm / CM_PER_FOOT;
		feet = cm / CM_PER_FOOT;
		inch = (foot - feet) * INCH_PER_FOOT;
		printf("%.1f cm = %d feet, %.1f inches.\n", cm, feet, inch);
		printf("Enter a height in centimeters(<=0 to quit):");
		scanf("%f", &cm);
	}
	printf("Bye!\n");
	return 0;
}