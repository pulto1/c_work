#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int check_triangle(int arr1, int arr2, int arr3)
{
	if (arr1 + arr2 > arr3 && arr1 - arr2 < arr3 && arr2 - arr1 < arr3
		&& arr1 + arr3 > arr2 && arr1 - arr3 < arr2 && arr3 - arr1 < arr2
		&& arr3 + arr2 > arr1 && arr3 - arr2 < arr1 && arr2 - arr3 < arr1)
	{
		if (arr1 == arr2 && arr2 == arr3)
			return 1;
		else if (arr1 == arr2 || arr2 == arr3 || arr1 == arr3)
			return 2;
		else
			return 3;
	}
	else
		return -1;

}

int main()
{
	int arr[999] = { 0 };
	int k = 0;
	for (k = 0; k < 999; k++)
	{
		arr[k] = ' ';
	}
	int i = 0;
	for (i = 0; i < 999; i += 3)
	{
		scanf("%d %d %d", &arr[i], &arr[i + 1], &arr[i + 2]);
	}

	int j = 0;
	for (j = 0; j < 6; j += 3)
	{
		if (arr[j] == ' ')
			break;

		int ret = check_triangle(arr[j], arr[j + 1], arr[j + 2]);

		if (ret == 1)
			printf("Equilateral triangle!\n");
		else if (ret == 2)
			printf("Isosceles triangle!\n");
		else if (ret == 3)
			printf("Ordinary triangle!\n");
		else if (ret == -1)
			printf("Not a triangle!\n");
	}
	return 0;
}