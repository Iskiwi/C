#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>

//#define num 5

#if 0
int main()
{
	int num = 0;
	scanf("%d", &num);
	int arr[num] = { 0 };
	int* ptr = NULL;
	ptr = malloc(num * sizeof(int));
	if (NULL != ptr)
	{
		int i = 0;
		for (i = 0; i < num; i++)
		{
			*(ptr + i) = i;
		}
		for (i = 0; i < num; i++)
		{
			printf("%d ", *(ptr + i));
		}
	}
	free(ptr);
	ptr = NULL;

	return 0;
}
#endif


#if 0
void main(void)
{
	char *string;

	/* Allocate space for a path name */
	string = malloc(_MAX_PATH);
	if (string == NULL)
		printf("allocate memory error\n");
	else
	{
		printf("Memory space allocated for path name\n");
		free(string);
		string = NULL;
		printf("Memory freed\n");
	}
}
#endif


/*内存的动态管理 malloc realloc calloc  free*/
#if 0

/*realloc 函数使用*/
int main()
{
	int* ptr = malloc(100);
	if (ptr != NULL)
	{
		/*使用内存空间*/
		int i = 0;
		for (i = 0; i < 25; i++)
		{
			*(ptr + i) = i;
		}
	}


	//对内存空间进行扩容
	int * p = realloc(ptr, 10000);
	if (p != NULL && p == ptr)
	{
		printf("%s\n", "realloc返回的地址没有变");
		printf("%d\n", *(ptr + 24));
	}
	else if (p != NULL && p != ptr)
	{
		printf("%s\n", "realloc返回的地址改变，在堆区新分配一块地址，并且将原先分配的地址上赋予的值，复制过来了");
		printf("p   = 0x%p\n", p);
		printf("ptr = 0x%p\n", ptr);
		printf("%d\n", *(ptr + 24));
	}
	else if (p == NULL)
		return 1;


	return 0;
}
#endif


/*calloc 相比于malloc多了一个初始化的步骤，calloc会将所有的申请的每个字节空间初始化成0 */
#if 0
//使用宏的方式来简化malloc函数，
//使用到宏的无类型特点，可以传type

#define Malloc(n, type) malloc(n*sizeof(type))
int main(void)
{

	//malloc函数
	int num = 5;
	//int* ptr = malloc(sizeof(int)*num);
	int* ptr = (int*)Malloc(num, int);
	if (ptr == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	for (i = 0; i < num; i++)
	{
		*(ptr + i) = 1 + i;
	}
	free(ptr);
	ptr = NULL;

	return 0;
}
#endif

#if 1-1
/*calloc 可以初始化每个字节为0 */
#define pt(VALUE, FORMAT) printf(FORMAT"\n", VALUE)
int main()
{
	int* ptr = calloc(5, sizeof(int));
	if (ptr != NULL)
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			printf("%d ", *(ptr + i));
		}
		printf("\n");
		//free(ptr);
		//ptr = NULL;
	}
	size_t num = 10;
	int* p = (int*)realloc(ptr, num * sizeof(int));
	if (p != NULL)
	{
		printf("p   = 0x%p\n", p);
		printf("ptr = 0x%p\n", ptr);
		if (p == ptr)
			printf("realloc function allocate the position the same as malloc function\n");
		for (int i = 0; i < num; i++)
		{
			pt(*(ptr + i), "%d");
		}
		
	}

	return 0;
}
#endif

#if 0
/*free 释放动态分配的内存空间*/

int main()
{
	int* ptr = malloc(100);
	free(ptr);
	ptr = NULL;
	//if (ptr != NULL)
	//{
	//	int a = 10;
	//	int* p = &a;
	//	//free(p); error
	//	free(ptr);
	//	ptr = NULL;
	//}
	if (ptr != NULL) {
#define yes
	}

#if defined(yes)
	{
		printf("%s\n", "动态开辟内存空间成功");
		int a = 10;
		int* p = &a;
		//free(p); error
		free(ptr);
		ptr = NULL;
	}
#endif
	return 0;
}
#endif