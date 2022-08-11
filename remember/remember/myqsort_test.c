#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>
#include "myqsort.h"


//这个项目通过模拟实现qsort,来熟悉函数指针
//qsort使用
//void qsort(void* base, size_t num, size_t size,
//	int(*compar)(const void*, const void*));

//size_t是unsigned int
//void* base是要进行排序的数组地址
//num是数组元素
//size是数组中单个元素所占空间
//compar是元素之间的比较方式

int compare_by_int(const void * a, const void * b)
{
	return (*((int*)a) - *((int*)b));
}

int compare_by_char(const void* a, const void* b)
{
	return (*((char*)a) - *((char*)b));
}

int compare_by_str(const void* a, const void* b)
{
	return strcmp(*((char**)a),*((char**)b));
}

int main()
{

	//int
	int arr[6] = { 23, 3, 5, 75, 67, 23 };
	int n = 0;
	qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare_by_int);
	for (n = 0; n < 6; n++)
	{
		printf("%d ", arr[n]);
	}
	printf("\n");

	//char
	char ch[5] = { 'a', 'b', 'd', 'A', 'z' };
	qsort(ch, 5, 1, compare_by_char);
	for (n = 0; n < 5; n++)
	{
		printf("%c ", ch[n]);
	}
	printf("\n");

	//str
	char* str[5] = { "adad", "adcd", "adfd", "zds","wfa" };
	qsort(str, 5, sizeof(char*), compare_by_str);
	for (n = 0; n < 5; n++)
	{
		printf("%s ", str[n]);
	}
}