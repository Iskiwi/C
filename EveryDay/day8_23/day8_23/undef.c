#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define MAX 100

#undef MAX
#define MAX 200
#define print(VALUE, FORMAT) printf("the value of "#VALUE" is "FORMAT"\n", VALUE);

//#undef print
#define cat(x, y) x##y

int main()
{
	int a = 9;
	double b = 8.9;
	print(9, "%d");
	//printf("the value of "#a" is ""%d""\n", a);

	print(b, "%f");

	int class101 = 50;
	printf("%d\n", cat(class, 101));

	printf("%d", MAX);
	return 0;
}