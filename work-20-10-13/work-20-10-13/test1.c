#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//#include <assert.h>
//
////模拟实现strcmp
//
//int my_strcmp(const char* p1, const char* p2)
//{
//	assert(p1);
//	assert(p2);
//	while (*p1 == *p2)
//	{
//		if (*p1 == '\0')
//			return 0;
//		else
//		{
//			p1++;
//			p2++;
//		}
//	}
//	return *p1 - *p2;
//}
//
//
//int main()
//{
//	const char arr1[] = "abcdef";
//	const char arr2[] = "abcdba";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//	{
//		printf("大于\n");
//	}
//	else if (ret == 0)
//	{
//		printf("等于\n");
//	}
//	else
//	{
//		printf("小于\n");
//	}
//	return 0;
//}