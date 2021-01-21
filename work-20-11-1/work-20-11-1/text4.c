#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>

//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

void check(int *p, int sz)
{
	assert(p);

	printf("这两个数是：");
	int i = 0;
	
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		int tmp = 0;
		for (j = 0; j < sz; j++)
		{
			if (p[i] == p[j])
				tmp++;

		}
		if (tmp == 1)
		{
			printf("%d ", p[i]);
		}
	}
	printf("\n");
}

int main()
{
	int arr[10] = { 1, 1, 2, 2, 3, 4, 4, 5, 6, 6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	check(arr, sz);
	return 0;
}
