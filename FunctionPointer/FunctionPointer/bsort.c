#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include "BubbleSort.h"


//void qsort(void* base, //要被排序的数组的第一个对象的指针
//            size_t num,  //数组元素数量
//            size_t size, //数组元素的字节数
//            int(*compar)(const void*, const void*) //
//            );

//void bubble_sort(int* arr, int size)
//{
//    int i = 0;
//    for (i = 0; i < size - 1 ; i++)
//    {
//        int j = 0;
//        for (j = 0; j < size - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}

int sort_by_int(const void* a, const void* b)
{
	return (*((int*)a) - *((int*)b));  //升序
	//return (*((int*)b) - *((int*)a));  //降序

}

int sort_by_str(const void* a, const void* b)
{
	//return (strcmp(*((char*)a), *((char*)b)));//strcmp形参是const char*
	return strcmp(*((char**)a), *((char**)b));

}

int sort_by_char(const void * a, const void * b)
{
	return ((int)(*((char*)a))) - ((int)(*((char*)b)));
	//return *((char*)a) - *((char*)b);
}
void swap(char* e1, char* e2, int sz)
{
	int i = 0;
	for (int i = 0; i < sz; i++)
	{
		char temp = *e1;
		*e1 = *e2;
		*e2 = temp;
		e1++;
		e2++;
	}
}
void bsort(void* arr, int length, int width, int(*pf)(void* a, void* b))
{
	int i = 0;
	for (i = 0; i < length - 1; i++)
	{
		int j = 0;
		for (j = 0; j < length - i - 1; j++)
		{
			//函数指针中只含有两个元素比较的结果，所以回调函数应该将下一次比较的数准备
			//void *((char*)arr + j*width);
			//void *((char*)arr + (j+1)*width);
			if (pf((char*)arr + j * width, (char*)arr + (j + 1)*width) > 0)
			{
				swap((char*)arr + j * width, (char*)arr + (j + 1)* width, width);
			}
		}
	}
}


int main()
{
	char* strs[] = { "asd", "adsdf", "hello", "bit" };
	bsort(strs, sizeof(strs) / sizeof(strs[0]), sizeof(strs[0]), sort_by_str);
	for (int i = 0; i < 4; i++)
	{
		printf("%s  ", strs[i]);
	}

	return 0;
}