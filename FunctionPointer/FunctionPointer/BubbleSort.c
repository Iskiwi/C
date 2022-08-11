#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

/*这个部分是排序算法的比较函数*/
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
	return strcmp(*((char**)a), *((char**)b));
}

/*这个是字节内容交换函数*/
void swap(char* e1, char* e2, size_t size)
{
	unsigned int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *(e1 + i);
		*(e1 + i) = *(e2 + i);
		*(e2 + i) = tmp;
	}
}


/*冒泡排序算法的实现*/
void BubbleSort(void* array, size_t num, size_t size, int(*cmp)(void* a, void* b))
{
	unsigned int i = 0;
	for (i = 0; i < num - 1; i++)
	{
		unsigned int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)array + j * size, (char*)array + (j + 1)*size) > 0)
			{
				swap((char*)array + j * size, (char*)array + (j + 1)*size, size);
			}
		}
	}
}