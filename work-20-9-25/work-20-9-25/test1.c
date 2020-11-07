#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//在屏幕上打印杨辉三角
//1
//1 1
//1 2 1
//1 3 3 1
//……

int combination(int a, int b)
{
	int c = 1; //分母
	int d = 1;  //分子
	int num = 0;
	int i = 1;
	for (i = 1; i <= b; i++)
	{
		c *= i;
	}

	for (i = 1; i <= b; i++)
	{
		d *= a;
		a--;
	}
	num = d / c;
	return num;
}

int main()
{
	int h = 5;
	int i = 2;
	printf("1\n");
	for (i = 2; i <=h; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d  ", combination(i - 1, j - 1));
		}
		printf("\n");
	}
	return 0;
}