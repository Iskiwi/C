#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define flag 1

/*条件编译*/

int main()
{
#if 0
//#ifdef flag
#if defined(flag)
	printf("%d\n", 12);
#endif

#if !defined(flag)
	printf("%s\n", "未定义flag标识符");
#else
	printf("%s\n", "定义了flag");
#endif

#endif

	
	return 0;

}
