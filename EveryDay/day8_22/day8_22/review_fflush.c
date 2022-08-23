#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <conio.h>

void main(void)
{
	int integer;
	char string[81];

	/* Read each word as a string. */
	printf("Enter a sentence of four words with scanf: ");
	for (integer = 0; integer < 2; integer++)
	{
		scanf("%s", string);  //获取键盘输入
		printf("%s\n", string);
	}

	/* You must flush the input buffer before using gets. */
	fflush(stdin);
	printf("Enter the same sentence with gets: ");
	gets(string);
	printf("%s\n", string);
}

