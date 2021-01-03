#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <stdlib.h>
//
////练习使用库函数，qsort排序各种类型的数据
//
////void print_arr(int*arr, int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////	printf("\n");
////}
//
//int cmp_float(void*e1, void*e2)
//{
//	return (int)(*((float*)e1) - *((float*)e2));
//}
//
//int main()
//{
//	float arr[] = { 1.2, 2.2, 2.1, 5.6, 3.3, 4.3, 9.9, 7.2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*print_arr(arr, sz);*/
//	qsort(arr, sz, sizeof(arr[0]), cmp_float);
//	//print_arr(arr, sz);
//	return 0;
//}