#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "BubbleSort.h"



int main()
{
	//int
	int arr[6] = { 23, 3, 5, 75, 67, 23 };
	int n = 0;
	BubbleSort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare_by_int);
	for (n = 0; n < 6; n++)
	{
		printf("%d ", arr[n]);
	}
	printf("\n");
	//char
	char ch[5] = { 'a', 'b', 'd', 'A', 'z' };
	BubbleSort(ch, 5, 1, compare_by_char);
	for (n = 0; n < 5; n++)
	{
		printf("%c ", ch[n]);
	}
	printf("\n");

	//str
	char* str[5] = { "adad", "adcd", "adfd", "zds","wfa" };
	BubbleSort(str, 5, sizeof(char*), compare_by_str);
	for (n = 0; n < 5; n++)
	{
		printf("%s ", str[n]);
	}

	return 0;
}



