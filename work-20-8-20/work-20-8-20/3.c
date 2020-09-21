#define _CRT_SECURE_NO_WARNINGS
//在屏幕上输出9 * 9乘法口诀表

#include<stdio.h>
int main()
{
	int i;
	int j;
	int product;
	int temp;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
again:

	for (i = 0; i < 9; i++)
	{
		temp = i;
		j = temp;
		for (j; j < 9; j++)
		{
			product = arr[temp] * arr[j];
			if (product < 10)
			    printf("%d * %d =%d     ", arr[temp], arr[j], product);
			else
				printf("%d * %d =%d    ", arr[temp], arr[j], product);
		}
		printf("\n");
	}

	return 0;
}