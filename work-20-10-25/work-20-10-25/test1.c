#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <assert.h>
//
////ģ��ʵ��memmove
//
//void* my_memmove(void* p1, const void* p2, size_t count)
//{
//	assert(p1);
//	assert(p2);
//	void* ret = p1;
//	if (p1 < p2)
//	{
//		//��ǰ���󿽱�
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
//		//�Ӻ���ǰ����
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
