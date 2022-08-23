#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 这个部分测试具有副作用的宏参数

// x + 1; 没有副作用
// x++;  


#define MAX(a, b) ( (a) > (b) ? (a) : (b) )

int main()
{
	int x, y, z;
	x = 5;
	y = 8;
	z = MAX(x++, y++);
	printf("x=%d y=%d z=%d\n", x, y, z);
	return 0;
}