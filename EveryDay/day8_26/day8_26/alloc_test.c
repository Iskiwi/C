#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#if 0
int main()
{
	int* p = (int*)malloc(100);
#if 1
	if (p != NULL)
	{
		printf("Start my adventure1111\n");
		free(p);
		free(p);
		p = NULL;
	}
#if 1
	if (!p)
	{
		printf("Start my adventure2222\n");

	}
#endif
#endif
	
	return 0;
}
#endif

#if 0
char * GetMemory(void)
{
	char p[] = "hello world";
	return p;
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}
#endif

#if 0
void GetMemory(char **p, int num)
{
	*p = (char *)malloc(num);
}
void Test(void)
{
	char *str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
}

int main()
{
	Test();
	return 0;
}
#endif




