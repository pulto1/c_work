#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。

int check(int arr[3][3], int* p1, int* p2, int k)
{
	*p1 = *p1 - 1;
	*p2 = 0;
	while (*p1 >= 0 && *p2 < 3)
	{
		if (arr[*p1][*p2] == k)
		{
			return 1;
		}
		else if (arr[*p1][*p2] > k)
		{
			(*p1)--;
		}
		else if (arr[*p1][*p2] < k)
		{
			(*p2)++;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int x = 3;
	int y = 3;
	int ret = check(arr, &x, &y, 2);
	if (1 == ret)
	{
		printf("找到了，下标是：%d %d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}