#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//用C语言在屏幕上输出以下图案：

int main()
{
	char arr[14]="";
	int i = 0;
	int j = 0;
	int left = 0;
	int right = 0;
	int k = 0;
	for (i = 0; i < 13; i++)
	{
		arr[i] = ' ';
	}
	char *p= arr+6;
	*p = '*';
	while (j < 7)
	{
		*(p - left) = '*';
		*(p + right) = '*';
		printf("%s\n", arr);
		left++;
		right++;
		j++;
	}

	left -= 1;
	right -= 1;
	while (k < 6)
	{
		*(p - left ) = ' ';
		*(p + right ) = ' ';
		printf("%s\n", arr);
		left--;
		right--;
		k++;
	}
	
	return 0;
}
