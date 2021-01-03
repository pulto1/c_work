#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <string.h>
//
////写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
////例如：给定s1 = AABCD和s2 = BCDAA，返回1
////给定s1 = abcd和s2 = ACBD，返回0.
////AABCD左旋一个字符得到ABCDA
////AABCD左旋两个字符得到BCDAA
////AABCD右旋一个字符得到DAABC
//
//int we_revolve(char *p, char*q, int sz)
//{
//		for (int l = 0; l < sz; l++) //外循环 旋转几个元素则执行几次
//		{
//			char ret = 0; //定义一个中间变量来存放字符串最后一个元素
//			ret = *(p + sz - 1); //存放最后一个元素
//			*(p + sz - 1) = *p; //把第一个元素放到最后一个元素的位置，也就是实现左旋
//			int i = 0;
//			for (i = 0; i < sz - 1; i++) //内循环，把除第一个元素外的后面的元素依次向前挪一个位置
//			{
//				if (i == sz - 2) //由于左旋后最后一个元素发生变化，倒数第二个元素存放左旋前最后一个元素，也就是我们在中间变量中存放的元素
//					*(p + i) = ret;
//				else
//					*(p + i) = *(p + i + 1); //倒数第二个元素前的元素依次存放自身下一个位置的元素
//			}
//			if ((strcmp(p, q) == 0))
//			{
//				return 1;
//			}
//			
//		}
//		return 0;
//}
//
//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "BCDAA";
//	int sz = strlen(arr1);
//	int tz = we_revolve(arr1, arr2, sz);
//	printf("%d\n", tz);
//	return 0;
//}