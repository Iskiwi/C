#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


void menu()
{
	printf("-------- 1. add  2.sub   -------\n");
	printf("-------- 3. mul  4.div   -------\n");
	printf("---------  0.exit  -------------\n");
}


int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}