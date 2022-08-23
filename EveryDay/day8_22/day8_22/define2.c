#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


#define print(VALUE, FORMAT) printf("the value of "#VALUE" is "FORMAT"\n", VALUE)


// 通过将预定义符和预编译，文件读写 等内容合并在一起，生成一个log文件
// 通过对二进制文件进行写入操作，使用__FILE__  __DATE__  __TIME__ __LINE__ 和define记录不同的变量运算的过程，到二进制文件，
// 并作后通过fread读取，检查是否问自己的想象的结果是一致的，并且对文件读取结束进行判断

// 涉及内容：define 预定义符 二进制文件的读写和读取文件尾部的判断

enum {count = 1};
int main()
{
	//define测试
	int i = 10;
	//print(i+3, "%d");

	//创建一个用于log结构体,保存每次要保存的log信息
	typedef struct Log
	{
		
		char date[30];
		char time[50];
		int  line;
		char file_loc[100];
		
	}L;
	FILE* pf = NULL;
	pf = fopen("define2.log", "ab");
	if (pf != NULL)
	{
		L log = { __DATE__, __TIME__, __LINE__, __FILE__ };
		fwrite(&log, sizeof(log), 1, pf);
	}
	else
	{
		fclose(pf);
		pf = NULL;
	}



	pf = fopen("define2.log", "rb");
	if (pf != NULL)
	{
		L buffer = { 0 };
		size_t num = fread(&buffer, sizeof(struct Log), count, pf);
		

		if (num == count)
		{
			printf("Read successfully\n");
			printf("检查写入的数据是否可以正常读取\n");
			printf("%s %s %s %d\n", buffer.file_loc, buffer.date, buffer.time, buffer.line);
		}
		else if (feof(pf))
			printf("Reaching the end-of-file successfully\n");
		else if (ferror(pf))
			printf("reading the define2.log error\n");

		fclose(pf);
		pf = NULL;
	}
	else
	{
		perror("read define2.log error");
		return 1;
	}

	return 0;
}