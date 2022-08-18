#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void main()
{
	int a = 10000;
	FILE* pf = fopen("文本文件和二进制文件.txt", "w");
	if (pf != NULL)
	{
		fwrite(&a, sizeof(int), 1, pf);
		fclose(pf);
		pf = NULL;
	}
	else
	{
		perror("open the file error");
		return 1;
	}
}