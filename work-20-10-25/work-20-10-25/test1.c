#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <assert.h>
//
////模拟实现memmove
//
//void* my_memmove(void* p1, const void* p2, size_t count)
//{
//	assert(p1);
//	assert(p2);
//	void* ret = p1;
//	if (p1 < p2)
//	{
//		//从前往后拷贝
//		while (count--)
//		{
//			*(char*)p1 = *(char*)p2;
//			++(char*)p1;
//			++(char*)p2;
//		}
//	}
//
//	else
//	{
//		//从后往前拷贝
//		while (count--)
//		{
//			*((char*)p1 + count) = *((char*)p2 + count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'l', 'm' };
//	my_memmove(arr + 2, arr, 4);
//	return 0;
//}
