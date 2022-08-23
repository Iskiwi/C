#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1
#define print1(value, format) printf("the value is "format"\n", value)

//2 
#define print2(VALUE, FORMAT) printf("the value of "#VALUE" is "FORMAT"\n", VALUE)

//get str of value 通过#VALUE的方式获取value值对应的标识符


// ##
#define MAX 100
#define combine(m, n, FORMAT, mn) printf("the value of "#mn" is "FORMAT"\n", m##n)
#define cat(X, Y) X##Y

/*
1、完成使用宏，来打印不同格式的数据 类似于打印
the value is 8
the value is 9.3
the value is 'a'

2、完成使用宏，来打印
the value of a is 8
the value of b is 9.3
the value of c is 'a'
*/

int main()
{
	int a = 8;
	double b = 9.3;
	char c = 'a';

	print1(a, "%d");
	print1(b, "%f");
	print1(c, "%c");

	//printf("the value of a is 8\n");
	print2(a, "%d");

	char name[20] = "lihua";
	print2(name, "%s");

	// 测试##合并标识符，但是#/##都只能在预处理的define语句中使用
	int ab = MAX;
	combine(a, b, "%d", ab);

	int class101 = 13;
	printf("%d\n", cat(class, 101));

	return 0;
}