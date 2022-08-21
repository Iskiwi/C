#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//通过fwrite写入部分数据，在通过fread读取，compare the fread return value and count,来判断是count or size equal 0, or less than the count 
int main()
{
	FILE* pf = fopen("is_end_of_binaryfile.txt", "w+");
	if (pf != NULL)
	{
		char buffer[21] = { 0 };
		size_t count = 20;
		gets(buffer);
		fwrite(buffer, sizeof(char), count, pf);

		rewind(pf);
		char copy[21] = { 0 };
		size_t read_num = fread(copy, sizeof(char), count, pf);
		printf("%u\n", read_num);
		if ((read_num < count) && (read_num != 0))
		{
			//有两种情况
			//要么是file中的数据个数，比count要小，
			//要么就是读取file数据时产生reading error
			if (ferror(pf))
				printf("reading file error");
			else if (feof(pf))
				printf("reaching end_of_file");
		}
		else if (read_num == 0)
			printf("size or count is 0");
		else
			printf("no error");
		
	}
	else
	{
		perror("fopen");
		return 1;
	}
}


/*
//通过fwrite写入部分数据，在通过fread读取，compare the fread return value and count,来判断是count or size equal 0, or less than the count 
//错误示范：第一个就是对文件既读又写，权限没有给够，第二个是fread多次使用，指针问题位置问题。
void main()
{
	FILE* pf = fopen("is_end_of_binaryfile.txt", "w+");
	if (pf != NULL)
	{
		char buffer[21] = { 0 };
		size_t count = 20;
		gets(buffer);
		fwrite(buffer, sizeof(char), count, pf);

		rewind(pf);
		char copy[21] = { 0 };
		//size_t read_num = fread(copy, sizeof(char), count, pf);
		if ((fread(copy, sizeof(char), count, pf) < count) && (fread(copy, sizeof(char), count, pf) != 0))
		{
			//有两种情况
			//要么是file中的数据个数，比count要小，
			//要么就是读取file数据时产生reading error
			if (ferror(pf))
				printf("reading file error");
			else if (feof(pf))
				printf("reaching end_of_file");
		}
		else if (fread(copy, sizeof(char), count, pf) == 0)
			printf("size or count is 0");
		else
			printf("no error");

	}
	else
	{
		perror("fopen");
		return 1;
	}
}*/