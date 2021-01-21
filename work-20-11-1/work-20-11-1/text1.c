//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
////Ä£ÄâÊµÏÖatoi
//
////int main()
////{
////	char c = '1';
////	int b = (int)c - 48;
////	printf("%d\n", b);
////	return 0;
////
////}
//
//int my_atoi(const char *p)
//{
//	assert(p);
//	int sum = 0;
//	int count = 10;
//	while ((*p == '+') || (*p == '-') || ((*p) >= 48 && (*p) <= 57) || (*p) == ' ')
//	{
//			
//		int tmp = 0;
//
//		while (*p == ' ')
//		{
//			p++;
//		}
//
//		if (*p == '+')
//		{
//			p++;
//		}
//
//		else if (*p == '-')
//		{
//			p++;
//			while (((*p) >= 48 && (*p) <= 57))
//			{
//				tmp = (int)*p - 48;
//				sum = sum*count - tmp;
//				p++;
//			}
//		}
//
//		while (((*p) >= 48 && (*p) <= 57))
//		{
//			tmp = (int)*p - 48;
//			sum = sum*count + tmp;
//			p++;
//		}
//
//		
//
//	}
//	return sum;
//}
//
//int main()
//{
//	const char arr[] = "-1234.67";
//	int ret = my_atoi(arr);
//	printf("%d", ret);
//	return 0;
//}
