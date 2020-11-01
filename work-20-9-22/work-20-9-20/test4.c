#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

void print_arr(int arr[] , int sz )
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reserve(int arr[], int arr2[], int sz)
{
	int i = 0;
	int j = 0;
	int k = 1;
	while (j < sz)
	{
		arr[i] = arr[j];
		i++;
		j += 2;
	}

	while (k < sz)
	{
		arr[i] = arr2 [k];//i的值不用变，直接从下一位开始
		i++;
		k += 2;
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 ,8,9};
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7,8 ,9};
	int sz = sizeof(arr) / sizeof(arr[0]);
	reserve(arr, arr2,sz);
	print_arr(arr, sz);
	return 0;
}
