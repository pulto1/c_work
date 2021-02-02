#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//int main()
//{
//	char arr1[100];
//	char arr2[100];
// 	gets(arr1);
//	strcpy(arr2, arr1);
//	int len = strlen(arr1);
//	char* p1 = arr2;
//	char* p2 = arr2;
//	char* p3 = arr1 + len - 1;
//	int tmp = 0;
//	while (*p1)
//	{
//		int count = 0;
//		
//		while (isalpha(*p2) != 0)
//		{
//			count++;
//			p2++;
//		}
//		tmp++;
//		if (tmp == 1)
//		{
//			p3 = p3 - count+1;
//			strncpy(p3, p1, count);
//		}
//
//		else
//		{
//			p3 = p3 - count -1;
//			strncpy(p3, p1, count);
//			*(p3 + count) = ' ';
//		}
//		if (*p2 == '\0')
//			break;
//		p2++;
//		p1 = p2;
//	}
//
//	printf("%s \n", arr1);
//
//	return 0;
//
//}

#include <stdio.h>
#include <assert.h>

//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

void check(int *p, int sz)
{
	assert(p);

	printf("这两个数是：");
	int i = 0;
	
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		int tmp = 0;
		for (j = i + 1; j < sz; j++)
		{
			if (p[i] == p[j])
				tmp++;

		}
		if (tmp == 0)
		{
			printf("%d ", p[i]);
		}
	}
	printf("\n");
}

int main()
{
	int arr[10] = { 1, 1, 2, 2, 3, 4, 4, 5, 6, 6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	check(arr, sz);
	return 0;
}
