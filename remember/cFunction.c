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

//关键字
//static 修饰局部变量，使得局部变量的存储位置发生变化，生命周期也随之变化，

//static 修饰全局变量，使得被修饰的全局变量只能在被定义的.c文件中使用，不能被链接，
//本质上是将全局变量的外部连接属性改成了内部链接属性


//
//int static_func()
//{
//	static int a = 1;
//	a++;
//	return a;
//}
//int main()
//{
//	int i = 0;
//	int a = 0;
//	while (i < 5)
//	{
//		a = static_func();
//		printf("%d\n", a);
//		i++;
//	}
//	extern val2;
//	printf("%d\n", val2);
//
//	//printf("%d\n", val);  error
//	//extern int add(int, int);
//	printf("%d\n", add(10, 20));
//	return 0;
//}

//void fun1(void)
//{
//	static int i = 0;  //定义静态变量，并且初始化
//	i++;//
//}
//static int j;  //静态变量j的定义，划定一块内存空间和给空间命了个名
//void fun2(void)
//{
//	j = 0;
//	j++;
//}
//int main()
//{
//	for (int k = 0; k < 10; k++)
//	{
//		fun1();
//		fun2();
//	}
//	//printf("%d\n", i);
//	printf("%d\n", j);
//	return 0;
//}

//问最后i 和 j 等于多少？i=10，j=1?YES


//struct Stu {
//	char aim[100];
//	int func;
//	char Upper[100];
//};
//
//int fun(int a, int b) {
//
//	return a + b;
//}
//
//
//void main() {
//	struct Stu students = { "定义类似于python中的类", fun(3, 4), "xiaoxiezimu" };
//	students.aim;
//	printf("%d\n", students.func);
//	printf("%s\n", students.Upper);
//}

//int main()
//{
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//typedef int* i;  // 重命名整数指针类型
//void Add_one(i b);
//
//void main()
//{
//
//	//typedef 重命名
//	typedef unsigned int u_int; // typedef常规类型
//	u_int a = 12;
//	printf("%d\n", a);
//
//
//	int b = 12;
//	Add_one(&b);
//	printf("%d\n", b);
//
//	typedef enum Colors { RED, GREEN, BLUE } C;  //重命名枚举类型
//	C red = RED;
//	printf("%d\n", red);
//
//	typedef struct STU {
//		char name[20];
//		int age;
//	} S;  // 重命名结构体类型
//	S stu = { "Lihua", 18 };
//	printf("%s's age is %d", stu.name, stu.age);
//}
//void Add_one(i b)
//{
//	*b += 1;
//}

//int main()
//{
//	struct stu
//	{
//		char name[10];
//		int age;
//		char id[10];
//	}s = { "lihua", 18, "9527" };
//
//	struct children
//	{
//		char name[10];
//		int age;
//		char id[10];
//	}*x, y = { "liMing", 15, "9528" };
//	x = &y;
//
//	printf("%s's age is %d, his id number is %s", s.name, s.age, s.id);
//	printf("\n");
//	printf("%s's age is %d, his id number is %s", x->name, x->age, x->id);
//
//	return 0;
//}

////定义结构体变量
//struct S
//{
//	char c;
//	int i;
//	double d;
//}s, *ps;  //定义全局结构体变量和结构体指针变量
//
//int main()
//{
//	ps = &s;
//	struct S s = { 's', 20, 3.14 };
//
//	struct T
//	{
//		char c;
//		int i;
//		double d;
//	};
//	//初始化局部结构体变量
//	struct T t = { 0 };//初始化t.c，其余默认初始化为0
//	printf("%lf\n", t.d); //0.000000
//
//	return 0;
//}

//
//#include "add.h"
//
//
////链接外部变量和函数（或者说对这个函数的声明）
//int main()
//{
//	//第一种声明方式，直接使用extern
//	//extern int add(int, int);
//
//	printf("%d\n", add(10, 20));
//
//	return 0;
//}

////const修饰指针变量
//int main()
//{
//	int a = 10;
//	int b = 20;
//	const int * pa = &a;
//	//*pa = 100; //error
//	pa = &b;
//
//	int* const PA = &a;
//	//PA = &b;//error
//	*PA = 30;
//	printf("%d\n", a); //30
//
//	
//}

//指针运算
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int b = 20;
//	int *pb = &b;
//	//printf("%p\n", pa + pb);
//	printf("%p\n", pa - pb);
//	printf("%p\n", pb - pa);
//
//	return 0;
//}

//void main()
//{
//	char a = 128;
//	char b = 0x10;
//	printf("%d\n", a);
//	printf("%d\n", b);
//}


//int* ret_ptr()
//{
//	//static int a = 10;
//	int a = 10;
//	return (&a);
//}
////指针初始化
//void main() {
//	//没有想好初始化成什么的时候，使用NUll空指针，不能直接对它解引用，赋值
//	//int * a = NULL;
//	//*a = 10;// error
//
//	//野指针
//	//1、未初始化指针  //是指向的地址不确定，随机值
//	//2、超过范围
//	//eg:
//	//int str[10] = { 0 };
//	//int i = 0;
//	//int* ptr = &str[0];
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*ptr = 2;
//	//	ptr++;
//	//}
//
//	//3、指针指向的内存空间在动态规划的时候，被删除了，这时候指针也变成了野指针
//	//而这种野指针要将它指向NULL
//
//	int* a_ptr = ret_ptr();  //返回局部变量的指针，局部变量生命周期短，权限问题，空间归还给操作系统了
//	//*a_ptr = 20;
//	//printf("%d", *a_ptr);
//
//}


////野指针
//int test1()
//{
//	static int i = 0;
//	return ++i;
//}


//尝试使用static修饰局部指针变量
//int static_pa(int arr[])
//{
//	for (int i = 0; i <= 10; i++)
//	{
//		static int* parr = (int*)arr;  //显示初始值不是常量
//		*parr = i;
//		parr++;
//	}
//	return 0;
//}

//int main()
//{
//	int* pa = NULL;
//	//#define NULL ((void *)0)
//	//*pa = 10; //定义指针的时候，没有决定好指针指向的空间的时候，
//	//可以指向NULL,NULL是地址0的无类型指针，
//	//不可以对该空间进行赋值
//
//	int arr[10] = { 0 };
//	int* parr = arr;
//	for (int i = 0; i <= 10; i++)
//	{
//		*parr = i;
//		parr++;
//	}
//
//	int x = 0;
//	for (int i = 0; i <= 9; i++)
//	{
//		x = test1();
//		printf("%d\n", arr[i]);
//	}
//	printf("%d\n", x);
//
//	return 0;
//}
//


//野指针
//非法访问，访问内存空间的权限被收回
//int a()
//{
//	int a = 0;
//	return &a;
//}

//给数组赋值，理解指针可以比较的数组空间
////指针能够和数组最后一个位置的后一个空间进行地址比较，不可以和-1位置比较
//void print_arr(const int* parr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", parr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int size = sizeof(arr) / sizeof(int);
//	int* ptr;
//	//从前往后赋值
//	int val = 1;
//	//for (ptr = &arr[0]; ptr < &arr[size];)
//	//{
//	//	*ptr++ = val++;
//	//}
//
//	//从后往前
//	//先移动指针，再赋值
//	//for (ptr = &arr[size]; ptr > &arr[0];)
//	//{
//	//	*--ptr = val++;
//	//}
//
//	//for (ptr = arr + size - 1; ptr >= arr;ptr--)
//	//{
//	//	*ptr = val++;
//	//}
//
//	//arr += 1;
//	print_arr(arr, size);
//	return 0;
//}

////整型提升
//int main()
//{
//	char a = -1;
//	short b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	//
//	printf("%d\n", a);
//	printf("%u\n", a);
//	return 0;
//}
//int test(int a)
//{
//	a++;
//	return a;
//}
//int main()
//{
//	int a = 0;
//	printf("%d\n", test(a));
//	printf("%d\n", a);//局部变量
//	a++;
//	printf("%d\n", a);//局部变量
//
//}