#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//ftell获取游标的相对位置，rewind将游标置零，他们俩都是只有一个参数，都是FILE* stream

//fprintf()将%s %ld %lf 的三个格式化数据从结构体中写入stream， 
//再通过fscanf从stream中读出格式化的数据，赋值给新的结构体变量


void main()
{
	struct P
	{
		char name[20];
		long id;
		double bank_remain;
	};
	FILE* stream;

	stream = fopen("ftell_rewind.txt", "w+");
	if (stream != NULL)
	{
		struct P p1 = { "zhangsan", 362421, 3625.12 };
		fprintf(stream, "%s %ld %lf", p1.name, p1.id, p1.bank_remain);
		printf("%ld", ftell(stream)); //24
		//rewind(stream);
		fseek(stream, 0L, SEEK_SET);

		struct P p2 = { 0 };
		fscanf(stream, "%s %ld %lf", p2.name, &(p2.id), &(p2.bank_remain));


		rewind(stream);
		fprintf(stream, "%s", "rewind");
		

		fclose(stream);
		stream = NULL;
	}
	else
		perror("fopen");
	
}



