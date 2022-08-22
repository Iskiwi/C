#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>


// 文件缓冲区的存在导致我们写文件和读取文件的时候要刷新一下缓冲区，不然数据就不会正确的被读写

int main()
{
	enum num
	{
		count = 11
	};
	FILE* pf = fopen("fflush.txt", "wb");
	if (pf != NULL)
	{
		
		char arr[count] = "helloworld";
		fwrite(arr, sizeof(char), count, pf);
		printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
		Sleep(20000);
		printf("刷新缓冲区\n");
		fflush(pf);

		Sleep(10000);
		fclose(pf);
		pf = NULL;

	}
	else
	{
		perror("fopen fflush.txt error");
		return 1;
	}
}