#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <stdlib.h>
//
////模仿qsort的功能实现一个通用的冒泡排序
//
//void print_arr(int*arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int cmp_int(void*e1, void*e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
//
////swap(char* e1, char* e2, int len)
////{
////	int i = 0;
////	for (i = 0; i < len; i++)
////	{
////		char tmp = 0;
////		tmp = *(e1 + i);
////		*(e1 + i) = *(e2 + i);
////		*(e2 + i) = tmp;
////	}
////}
////
////void my_qsort(void*arr, int sz, int len, int(*cmp)(void*, void*))
////{
////	int i = 0;
////	for (i = 0; i < sz - 1; i++)
////	{
////		int j = 0;
////		for (j = 0; j < sz - 1 - i; j++)
////		{
////			if (cmp((char*)arr + j*len, (char*)arr + (j + 1)*len) >0)
////				swap((char*)arr + j*len, (char*)arr + (j + 1)*len, len);
////		}
////	}
////}
//
//int main()
//{
//	int arr[] = { 9, 8, 56, 55, 4,15, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	/*my_qsort(arr, sz, sizeof(arr[0]), cmp_int);*/
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//	return 0;
//}

