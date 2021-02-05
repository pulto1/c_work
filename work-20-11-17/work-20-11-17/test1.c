#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//写一个宏，可以将一个整数字的奇数位和偶数位交换。

#define SWAP(n) (((n & 0x55555555) <<1) + ((n & 0xaaaaaaaa) >> 1))
int main()
{
	int n = 5;
	printf("%d\n", SWAP(n));
	return 0;
}
