#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	FILE* pf = fopen("fscanf_fprintf.txt", "w");
	//位运算符 & | ~ ^ << >> 
	//逻辑运算符 && || ！
	if (!pf)
	{
		perror("fopen");
		
		//fputs(stderr, stdout);//不能打印出错误码
		printf("%s", strerror(errno));
		return 1;
		//没有效果，不知道这样是否有问题
	}
	////操作文件
	fprintf(stdout, "%s %d", "fprintf", 12);
	fprintf(pf, "%s %f", "fscanf_get_format_str", 8.17);

	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	FILE* pf = fopen("fscanf_fprintf.txt", "w");
//	FILE* rf = fopen("testfile.txt", "r");
//	if (!pf && !rf)
//	{
//		perror("fopen");
//
//		/*fputs(fgetc(stderr), stdout);
//		printf("%s", strerror(errno));*/
//		return 1;
//		//没有效果，不知道这样是否有问题
//	}
//	//操作文件
//	fprintf(stdout, "%s %d\n", "fprintf", 12);
//	fprintf(pf, "%s %lf", "fscanf_get_format_str", 8.17);
//
//	//通过使用fscanf获取输入,将文件中的内容读入text字符数组中
//	char text[100] = { "afsdfdsfadadsf" };
//	fscanf(rf, "%s", text);
//	printf("%s", text);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	fclose(rf);
//	rf = NULL;
//	return 0;
//}

//输入流和输出流
