#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

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
		arr[i] = arr2 [k];//i��ֵ���ñ䣬ֱ�Ӵ���һλ��ʼ
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
