#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//Fibonacci数列是这样定义的：
//F[0] = 0
//F[1] = 1
//for each i ≥ 2: F[i] = F[i - 1] + F[i - 2]
//因此，Fibonacci数列就形如：0, 1, 1, 2, 3, 5, 8, 13, ...，
//在Fibonacci数列中的数我们称为Fibonacci数。给你一个N，你想让其变为一个Fibonacci数，每一步你可以把当前数字X变为X - 1或者X + 1，
//现在给你一个数N求最少需要多少步可以变为Fibonacci数。

int check_fab(int arr[], int i, int N)
{
	int j = 0;
	for (j = 0; j < i; j++)
	{
		if (N == arr[j])
			return 0;
	}
	return 1;
}

int main()
{
	int arr[10000] = { 0 };
	arr[0] = 0;
	arr[1] = 1;
	int i = 1;
	while (arr[i] <= 1000000)
	{
		i++;
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	arr[i] = 0;
	int N = 0;
	scanf("%d", &N);
	int ret = N;
	int tmp1 = 0;
	int tmp2 = 0;
	while (check_fab(arr, i, N) == 1)
	{
		N--;
		tmp1++;
	}
	N = ret;
	while (check_fab(arr, i, N) == 1)
	{
		N++;
		tmp2++;
	}
	int num = (tmp1 > tmp2 ? tmp2 : tmp1);
	printf("%d", num);

	return 0;
}