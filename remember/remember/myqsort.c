#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


void swap(void* e1, void* e2, size_t size)
{
	int i = 0;
	char temp = 0;
	for (i = 0; i < size; i++)
	{
		//交换
		temp = *((char*)e1 + i);
		*((char*)e1 + i) = *((char*)e2 + i);
		*((char*)e2 + i) = temp;
	}
}

//找到基准值的索引值
//int find_index()
//{
//	int i, j = 0;
//	while (i < j)
//	{
//
//	}
//}


//void myqsort(void* base, size_t num, size_t size, int(*compar)(void* a, void*b))
//{
//	
//	int i = 0;
//	int j = num - 1;
//	
//	while (i < j)
//	{
//		
//		/*if (compar((void*)((char*)base + j * size), base) < 0)
//		{
//			swap((void*)((char*)base + j * size), base, size);
//		}*/
//
//
//	}
//}