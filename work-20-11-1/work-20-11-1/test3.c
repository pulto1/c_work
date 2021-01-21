//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <assert.h>
//
////Ä£ÄâÊµÏÖstrncpy
//
//char * my_strncpy(char * des, const char * src, size_t num)
//{
//	assert(des);
//	assert(src);
//	char* start = des;
//	while (num)
//	{
//		if (*src != '\0')
//		{
//			*des++ = *src++;
//			num--;
//		}
//		else
//		{
//			*des = '\0';
//			des++;
//			num--;
//		}
//		
//	}
//	return start;
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxx";
//	const char arr2[] = "hello";
//	my_strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}
