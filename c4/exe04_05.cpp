/*提示用户输入下载速度和文件大小，计算下载时间*/
#include <stdio.h>

int main(void)
{	float speed, size, time;
	printf("Please input the speed(Mb/s) and the file size(MB):");
	scanf("%f %f", &speed, &size);
	time = size / speed;
	printf("At %.2f megabits per second,a file of %.2f megebytes\ndonwloads in %.2f seconds.", speed, size, time);
	return 0;
}