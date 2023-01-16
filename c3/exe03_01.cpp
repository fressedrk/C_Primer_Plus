/*观察系统如何处理整数上溢、浮点数上溢、浮点数下溢*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{	int biggest_int = __INT_MAX__;//整数上溢
	printf("__INT_MAX__=%d,__INT_MAX__+1=%d\n", biggest_int, biggest_int + 1);
	float biggest_float = FLT_MAX;//浮点数上溢
	printf("FLT_MAX=%e,FLT_MAX+1=%e\n", FLT_MAX, FLT_MAX + 1);
	float small_flt = FLT_MIN;//浮点数下溢
	printf("small_flt=%e,small_flt/100=%e", FLT_MIN, FLT_MIN / 100);
	return 0;
}