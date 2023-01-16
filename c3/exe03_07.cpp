/*用户输入身高（英寸），以cm单位显示*/
#include <stdio.h>
#define CM_PER_INCH 2.54

int main()
{	double inch, cm;
	printf("Enter your height(inch):");
	scanf("%lf", &inch);
	cm = inch * CM_PER_INCH;
	printf("your height is %lfcm", cm);
	return 0;

}