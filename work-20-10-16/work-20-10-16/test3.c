#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <string.h>
//
////дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
////���磺����s1 = AABCD��s2 = BCDAA������1
////����s1 = abcd��s2 = ACBD������0.
////AABCD����һ���ַ��õ�ABCDA
////AABCD���������ַ��õ�BCDAA
////AABCD����һ���ַ��õ�DAABC
//
//int we_revolve(char *p, char*q, int sz)
//{
//		for (int l = 0; l < sz; l++) //��ѭ�� ��ת����Ԫ����ִ�м���
//		{
//			char ret = 0; //����һ���м����������ַ������һ��Ԫ��
//			ret = *(p + sz - 1); //������һ��Ԫ��
//			*(p + sz - 1) = *p; //�ѵ�һ��Ԫ�طŵ����һ��Ԫ�ص�λ�ã�Ҳ����ʵ������
//			int i = 0;
//			for (i = 0; i < sz - 1; i++) //��ѭ�����ѳ���һ��Ԫ����ĺ����Ԫ��������ǰŲһ��λ��
//			{
//				if (i == sz - 2) //�������������һ��Ԫ�ط����仯�������ڶ���Ԫ�ش������ǰ���һ��Ԫ�أ�Ҳ�����������м�����д�ŵ�Ԫ��
//					*(p + i) = ret;
//				else
//					*(p + i) = *(p + i + 1); //�����ڶ���Ԫ��ǰ��Ԫ�����δ��������һ��λ�õ�Ԫ��
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