#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <string.h>
//
////写一个函数，可以逆序一个字符串的内容。
//
//
//void reverse_string(char *p, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	char tmp;
//	while (left < right)
//	{
//		tmp = *(p + left);
//		*(p + left) = *(p + right);
//		*(p + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int sz;
//	char arr[] = "welcome";
//	sz = strlen(arr);
//	printf("%s\n", arr);
//	reverse_string(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}