#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

void change_array(int arr1[], int arr2[], int sz)
{
	int i;
	int tmp;
	for (i = 0; i < sz; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 6, 7, 8, 9, 0 };
	int sz;
	sz = sizeof(arr1) / sizeof(arr1[0]);
	print(arr1, sz);
	print(arr2, sz);
	change_array(arr1, arr2, sz);
	print(arr1, sz);
	print(arr2, sz);
	return 0;
}