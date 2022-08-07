#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//void main() {
//	char ch[10] = "adfaadq";
//
//	memset(ch, '1', 2);
//	printf("%s\n", ch);
//	printf("%d\n", strlen(ch));
//	puts(ch);
//}



//continue
//每次循环的时候，我们记得改变循环变量的值，不然容易出现死循环
// 循环的几个基本要素： 循环变量 循环结束条件 循环体
//int main() {
//	int i = 0;
//	while (i < 10) {
//		if (5 == i) {
//			i++;    //如果没有这一步， 就会死循环
//			continue;  //continue跳出这次循环时 必须要取改变循环变量
//
//		}
//
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

// for 循环相较于while循环而言，for循环的循环变量改变部分，不容易造成死循环的情况，
//// for循环的三要素使得循环结构体看起来更加的紧凑，类似于switch
//int main() {
//	for (;;) {
//		printf("shabi\n");
//	}
//	return 0;
//}

//for 可以多个循环变量,并且注意逗号表达式的使用


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 2 && j < 5; ++i, j++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main() {
//	int i = 0;
//	do {
//		/*if (5 == i) {
//			break;
//		}*/
//
//		if (5 == i) {
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}


//void main() {
//
//	char ch[20] = { 0 };
//	system("shutdown -s -t 60");
//	printf("请输入爸爸，否则电脑60s后将关机！！关闭程序也没用\n");
//
//flag:
//	printf("输入-> ");
//	scanf("%s", ch);
//	if (strcmp(ch, "爸爸") == 0) {
//		system("shutdown -a");
//
//	}
//	else {
//
//		printf("\n输入错误，如果不想关机，请再次输入。\n");
//		goto flag;
//	}
//
//
//}
//#define row 2
//#define col 3
//void main()
//{
//	int i = 0;
//	int j = 0;
//	int num = 0;
//	for (; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			num++;
//			printf("he\n");
//			if (i == row && col == j)
//				goto jump;
//		}
//	}
//jump:
//	printf("跳出,共执行%d次\n", num);
//	char str[9];
//	scanf("%s", str);
//	printf("%s", &str[0]);
//
//}


// 递归
//使用递归的方式将1234 依次打印
//void print_num(int n)
//{
//	if (n / 10 == 0)
//		printf("%d ", n);
//	else
//	{
//		print_num(n / 10);
//		printf("%d ", n % 10);
//	}
//
//}
//int main()
//{
//	int num = 1234;
//	print_num(num);
//	return 0;
//
//}


////指针实现strlen
//int Mystrlen(char* str)
//{
//	int num = 0;
//	while (*str != '\0')
//	{
//		str++;
//		num++;
//	}
//	return num;
//}
////递归实现strlen
//int mystrlen(const char* str)
//{
//	printf("%d\n", str);
//	if (*str != '\0')
//	{
//		1 + mystrlen(str + 1);
//		return str;
//	}
//	return 0;
//}
//void main() {
//
//	char arr[] = "bit";
//
//	//printf("%d", Mystrlen(arr));
//	//printf("\n");
//	printf("%d", mystrlen(arr));
//	//printf("%s\n", arr);
//}
//
//// 按位逻辑运算符
//void main()
//{
//
//	int a = 9;
//	//1001
//	int b = 3;
//	//0011
//	//printf("%d\n", a&b); //0001  1
//	//printf("%d\n", a^b); //1010  10
//	//printf("%d\n", a|b); //1011  11
//
//	int c = -1;
//	//负数在内存保存补码，原反补
//	//10000000 00000000 00000000 00000001
//	//11111111 11111111 11111111 11111110
//	//11111111 11111111 11111111 11111111
//
//	int d = 3;
//	//00000000 00000000 00000000 00000011
//	int e = -7;
//	printf("%d\n", c&d); // 3
//	printf("%d\n", c^d); // 11111111 11111111 111111111 11111100 
//	//10000000 00000000 00000000 00000011
//	//10000000 00000000 00000000 00000100
//	// -4
//	printf("%d\n", c|d); 
//	// -1
//	printf("%d\n", ~c);//0
//	printf("%d\n", -1 << 3); //-8
//	//11111111 11111111 11111111 11111111
//	//11111111 11111111 11111111 11111000  
//	//10000000 00000000 00000000 00000111
//	//10000000 00000000 00000000 00001000
//	//-8
//	printf("%d\n", -1 >> 3); 
//
//	//a=9
//	printf("%d\n", a ^ a); //0 
//	printf("%d\n", 0 ^ a); //a
//
//}
//
//
//
////计算一个数值在32位系统的内存中二进制位1的个数
//void main()
//{
//	int a = 7;
//	int count = 0;
//	scanf("%d", &a);
//	int num = (a >= 0 ? a : ~a);
//	while (num)
//	{
//		if (num % 2)
//			count += 1;
//		//a >>= 1;
//		num = num / 2;
//	}
//	if (a >= 0)
//		printf("a 二进位中 1 有{  %d  }个", count);
//	else
//		printf("a 二进位中 1 有{  %d  }个", 32-count);
//}
//

//
//void main() {
//
//	//逗号表达式
//	//通过不断获取字符加入一个数组里
//	char str[10];
//	int ch;
//	int i = 0;
//
//	while (ch = getchar(), i < sizeof(char [10]) / sizeof(char) - 1)
//	{
//
//		if (ch != '\n' && ch != EOF)
//		{
//			str[i] = (char)ch;
//			i++;
//		}
//	}
//	str[9] = '\0';
//	printf("%s", str);
//
//}

