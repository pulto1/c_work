#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <assert.h>
//
////ģ��ʵ��strncat
//
//char * my_strncpy(char * des, const char * src, size_t num)
//{
//	assert(des);
//	assert(src);
//
//	char* start = des;
//	//��'\0'
//	while (*des)
//	{
//		des++;
//	}
//
//	//��ʼ����
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
