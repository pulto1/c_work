//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
////ʵ��һ�������������ð������
//
//void print_array(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10];
//	int i = 0;
//	int sz;
//	sz = sizeof(arr) / sizeof(arr[0]);
//
//	printf("������ʮ�����֣� ");
//	for (i = 0 ; i < sz ; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	printf("\n����ǰ: ");
//	print_array(arr, sz);
//
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			int tmp = 0;
//			if (arr[j]>arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	printf("�����: ");
//	print_array(arr, sz);
//	return 0;
//}