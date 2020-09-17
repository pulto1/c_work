#define _CRT_SECURE_NO_WARNINGS
//写一个代码打印1 - 100之间所有3的倍数的数字
#include<stdio.h>
int main()
{
	int i = 3;
	while (i <= 100)
	{
		printf("%d   ",i);
		i += 3;
	}
	return 0;
}