#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "calculator.h"


int main()
{
	menu();
	int input = 0;
	
	int(*pfarr[])(int, int) = { NULL, add, sub, mul, div }; //创建函数指针数组
	do
	{
		printf("please choose the mode: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		case 2:
		case 3:
		case 4:
			printf("%s", "请输入计算的两个数字: ");
			int x = 0;
			int y = 0;
			scanf("%d %d", &x, &y);
			printf("result = %d\n", (pfarr[input])(x, y));
			break;
		case 0:
			printf("%s\n", "exit");
			break;
		default:
			//chose the mode again
			printf("%s\n", "choose mode error!");
			break;
		}
	} while (input);
	
	
	return 0;

}
