#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

/*这个.c 通过对fread和fwrite对文件进行操作*/

/*从这个fread和fwrite可以看出，fwrite是从写入stream,而fread是从stream中读取，出发点都是stream*/

int main()
{
	FILE* pf;
	char str[30] = { 0 };

	//fwrite将数据写入文件
	if ((pf = fopen("binary.txt", "w")) != NULL)
	{
		for (int i = 0; i < 25; i++)
		{
			str[i] = 'z' - i;
		}
		fwrite(str, sizeof(char), 25, pf);
		fclose(pf);
		pf = NULL;
	}
	else
	{
		perror("fopen");
		return 1;
	}

	//fread将数据从数据中读出来，但是一般要拿一个变量来装着
	char list[30] = { 0 };
	pf = fopen("binary.txt", "r");
	if (!pf)
	{
		printf("%s", strerror(errno)); //使用string.h
		return 1;
	}
	else
	{
		fread(list, sizeof(char), 10, pf);
		printf("%s", list);
		fclose(pf);
		pf = NULL;
	}
	return 0;
}