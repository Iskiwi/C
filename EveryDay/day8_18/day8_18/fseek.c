#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
/*

//printf("%s", "");

void main()
{
	printf("The fseek begins here: "
		"This is the file 'fseek.out'.\n"
	"printf打印连续的字符串的时候 就是这个样子的\n");

	printf("%s", "heahfsdjf" "dafds\n");
	printf("%s", "heahfsdjf""dafds");
 }
 */

/*

//fseek SEEK_SET
#include <stdio.h>

void main(void)
{
	FILE *stream;
	char line[81];
	int  result;

	stream = fopen("fseek.out", "w+");
	if (stream == NULL)
		printf("The file fseek.out was not opened\n");
	else
	{
		fprintf(stream, "The fseek begins here: "
			"This is the file 'fseek.out'.\n");
		result = fseek(stream, 3, SEEK_SET);  //SEEK_SET  0
		if (result)
			perror("Fseek failed");
		else
		{
			fgets(line, 80, stream);
			printf("%s", line);

		}
		fclose(stream);
	}
}
*/

//ftell()

void main()
{
	//使用fgets获取stdin输入（hello world)，存入str字符数组；
	//使用fprintf将fgets获取的data,存入文件中，
	//通过fseek在offset=6的位置,使用fprintf,获取字符串 strong man
	//最终结果应该是hello strong man在文件中，文件名设为fseek.txt,并且使用ftell获取文件指针的相对位置
	FILE* stream;
	char str[21] = { 0 };
	stream = fopen("fseek.txt", "w");
	if (stream == NULL)
	{
		printf("%s", strerror(errno));
	}
	else
	{
		fgets(str, 20, stdin);
		fprintf(stream, "%s", str);
		int result = fseek(stream, 6L, SEEK_SET);
		if (result)
			printf("fseek移动文件指针错误！");
		else
		{
			fprintf(stream, "%s", "strong man");
			long num = ftell(stream);  //6+10=16
			printf("%ld", num);
		}
		fclose(stream);
		stream = NULL;

	}
}

