//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////创建一个整形数组，完成对数组的操作
////1.实现函数init() 初始化数组为全0
////2.实现print()  打印数组的每个元素
////3.实现reverse()  函数完成数组元素的逆置。
////要求：自己设计以上函数的参数，返回值。
//
//void init(int arr[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int tmp;
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}