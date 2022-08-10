#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h> 
#include <assert.h>

//void* my_memmove(void* dst, const void *src, size_t num)
//{
//  assert(dst && src);
//	void* ret = dst;
//	if (dst > src && (char*)dst <= (char*)src + num - 1)
//	{
//		//��ȡ����ָ��֮��ľ���
//		int dis = abs((char*)dst - (char*)src);
//		char* a[20];
//		//1. ��¼����ֵ
//		//�ȱ����ڴ��ص��Ĳ��ֵ�����
//		for (int i = 0; i < (int)(num - dis); i++)
//		{
//			a[i] = (char)*((char*)src + dis + i);
//		}
//
//		//2����ʼ����
//		for (int i = 0; i < dis; i++)
//		{
//			*(char*)dst = *(char*)src;
//			((char*)dst)++;
//			((char*)src)++;
//		}
//		for (int i = 0; i < (int)num - dis; i++)
//		{
//			*(char*)dst = a[i];
//			((char*)dst)++;
//		}
//	}
//	else
//	{
//		for (int i = 0; i < num; i++)
//		{
//			*(char*)dst = *(char*)src;
//			((char*)dst)++;
//			((char*)src)++;
//		}
//	}
//	return ret;
//}
//
//
////ģ�¿⺯��ʵ��
//void* memMove(void* dst, const void* src, size_t num)
//{
//	assert(dst && src);
//	void *ret = dst;
//	//ǰ�򿽱�
//	if (dst <= src || ((char*)src + num - 1) < (char*)dst)
//	{
//		while (num--)
//		{
//			*(char*)dst = *(char*)src;
//			((char*)src)++;
//			((char*)dst)++;
//		}
//	}
//	else  //���򿽱�
//	{
//		dst = (char*)dst + num - 1;
//		src = (char*)src + num - 1;
//		while (num--)
//		{
//			*(char*)dst = *(char*)src;
//			((char*)src)--;
//			((char*)dst)--;
//		}
//	}
//	return ret;
//}
//
//
//#include <string.h>
////memmoveģ����ʵ��
//int main()
//{
//	//char a[] = "abcdefgh";
//	//my_memmove(a + 3, a, 5); //abcabcde
//	//puts(a);
//	char a[] = "abcdefgh";
//	memMove(a + 3, a, 5); //abcabcde
//	puts(a);
//	struct Stu
//	{
//		char name[20];
//		int age;
//	}Harry, Potter;
//	char* p = "bright Harry";
//	memcpy((&Harry)->name, p, strlen(p)+1);
//	Harry.age = 14;
//
//	//my_memmove(&Potter, &Harry, sizeof(Harry));
//	////puts(Harry.name);
//
//	memMove(&Potter, &Harry, sizeof(Harry));
//	printf("name:%s  age:%d\n", Potter.name, Potter.age);
//
//	//perror("errno = 3");
//	return 0;
//}