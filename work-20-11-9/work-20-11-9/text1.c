#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

struct ARRAY
{
	int sz;
	int *ptr;
};

void print(int sz, int *p)
{
	int i = 0;
	for (i = 0; i<sz; i++)
	{
		printf("%d ", *(p + i));
	}
}

void check_repeat(int *sz, int *p)
{
	int i = 0;
	for (i = 0; i < *sz; i++)
	{
		int j = 0;
		int tmp = 0;
		for (j = 0; j < *sz; j++)
		{
			if (*(p + i) == *(p + j))
			{
				tmp++;
			}
			if (tmp > 1)
			{
				int k = j;
				for (k = j; k < *sz-1; k++)
				{
					*(p + k) = *(p + k + 1);

				}
				(*sz)--;
				j--;
				tmp--;

			}
		}
	}
}

int main()
{
	struct ARRAY arr = { 0 };

	scanf("%d", &arr.sz);

	arr.ptr = (int*)malloc(arr.sz * 4);
	int i = 0;
	for (i = 0; i < arr.sz; i++)
	{
		scanf("%d", arr.ptr + i);
	}
	check_repeat(&(arr.sz), arr.ptr);
	print(arr.sz, arr.ptr);

	free(arr.ptr);
	arr.ptr = NULL;

	return 0;
}
