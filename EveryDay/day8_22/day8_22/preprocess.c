#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	FILE* pf = fopen("preprocess.log", "a");
	if (!pf)
	{
		perror("fopen preprocess.txt error");
		return 1;
	}
	else
	{
		typedef struct stu
		{
			char name[21];
			int age;
		}S;
		//将当前文件地址 行号 日期 当前语句执行日期 写入log文件中，方便后续维护
		fprintf(pf, "%s %d %s %s ", __FILE__, __LINE__, __DATE__, __TIME__);
		
		S s1 = { 0 };
		scanf("%s %d", s1.name, &(s1.age));
		fprintf(pf, "%s %d\n", s1.name, s1.age);

		//将当前文件地址 行号 日期 当前语句执行日期 写入log文件中，方便后续维护
		fprintf(pf, "%s %d %s %s ", __FILE__, __LINE__, __DATE__, __TIME__);

		S s2 = { 0 };
		scanf("%s %d", s2.name, &(s2.age));
		fprintf(pf, "%s %d\n", s2.name, s2.age);

		fclose(pf);
		pf = NULL;
		
	}
	return 0;
}