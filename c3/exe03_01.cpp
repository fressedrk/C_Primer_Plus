/*�۲�ϵͳ��δ����������硢���������硢����������*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{	int biggest_int = __INT_MAX__;//��������
	printf("__INT_MAX__=%d,__INT_MAX__+1=%d\n", biggest_int, biggest_int + 1);
	float biggest_float = FLT_MAX;//����������
	printf("FLT_MAX=%e,FLT_MAX+1=%e\n", FLT_MAX, FLT_MAX + 1);
	float small_flt = FLT_MIN;//����������
	printf("small_flt=%e,small_flt/100=%e", FLT_MIN, FLT_MIN / 100);
	return 0;
}