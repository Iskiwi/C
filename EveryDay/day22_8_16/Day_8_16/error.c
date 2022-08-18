#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

// errno
// strerror
 //perror
//
//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("testfile.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		//strerror(errno);
//		return 1;
//	}
//	//文件操作
//	//fgetc(pf);
//	//
//	//fgetc(pf);
//	////printf("%c", fgetc(pf));
//
//	//char arr[10] = { 0 };
//	//fgets(arr, 3, pf);
//	//printf("%s", arr);  //cd
//	//printf("%s", fgets(arr, 3, pf));  //cd
//	
//	char arr[10] = { 0 };
//	fgets(arr, 5, pf);
//	fputs("hello world\n", stdout);
//	printf("%d",fputs(arr, stdout));
//
//	//fgets()，有三个参数,存放n个字符的位置，n,输入流
//	//返回值是存放n个字符的char*
//
//	//fputs()，string，FILE* stream, return value:int，if return error,return EOF(-1)
//
//	//文件关闭
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
int main()
{
	// 打开文件
	FILE* pf = fopen("testfile.txt", "w");
	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}
	//文件操作
	//完成一个从键盘标准输入流获取数据，再写入文件
	char arr[10] = { 0 };
	fgets(arr, 10, stdin);

	/*FILE* pff = NULL;
	if (fputs(arr, pff) != EOF)
	{
		NULL;
	}
	else
	{
		perror("fputs");
	}*/

	fputs(arr, pf);
	printf("%s", arr);
	
	//文件关闭
	fclose(pf);
	pf = NULL;
	return 0;
}