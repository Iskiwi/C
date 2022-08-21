#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*这个例子是通过往文本文件中添加z-b的字母，并将它们通过putchar读取，

通过fgetc是否为EOF,和fgets是否为NULL，（出现为EOF或者是NULL)

说明两种情况，第一种就是文末，第二终究是读取失败
ferror is testing an error on a stream

feof is testing end_of_file
*/

void main()
{
	FILE* pf = fopen("Is_end_of_file.txt", "w");
	if (!pf)
	{
		perror("fopen the Is_end_of_file.txt");
		return 1;
	}
	else
	{
		//将25个字母存入文件中
		for (int i = 0; i < 25; i++)
		{
			int alpha = 'z' - i;
			if (!(fputc(alpha, pf)))
			{
				perror("fputc");
			}
		}
		fseek(pf, 0L, SEEK_SET);//rewind(pf);
		//从头到尾读取文件，当遇到fgetc为EOF的时候，说明文件到尾部和reading error
		int c;
		while ((c = fgetc(pf)) != EOF)
		{
			putc(c, stdout);
		}
		//当文件到尾部时
		if (feof(pf))
			printf("Is pointing the end of file");

		//test for an error no a stream
		else if (ferror(pf))
			puts("I/O error when reading");

		fclose(pf);
		pf = NULL;
	}
}

