#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//дһ���꣬���Խ�һ�������ֵ�����λ��ż��λ������

#define SWAP(n) (((n & 0x55555555) <<1) + ((n & 0xaaaaaaaa) >> 1))
int main()
{
	int n = 5;
	printf("%d\n", SWAP(n));
	return 0;
}
