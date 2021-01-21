#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <assert.h>
//
////模拟实现strncat
//
//char * my_strncpy(char * des, const char * src, size_t num)
//{
//	assert(des);
//	assert(src);
//
//	char* start = des;
//	//找'\0'
//	while (*des)
//	{
//		des++;
//	}
//
//	//开始拷贝
//	while (num)
//	{
//		if (*src == '\0')
//		{
//			*des = *src;
//			break;
//		}
//		else
//		{
//			*des = *src;
//			des++;
//			src++;
//			num--;
//		}
//	}
//	return start;
//
//}
//
//int main()
//{
//	char arr[20] = "hello ";
//	my_strncpy(arr, "world", 3);
//	printf("%s", arr);
//	return 0;
//}
