//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
////���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
////�������� :
////1999 2299
////������� : 7
//
int count_one(int n)
{
	int i = 0;
	int count=0;
	for (i = 0; i < 32; i++)
	{
		int k = n >>i;
		if ((k & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
//
//void different_bit(int a, int b)
//{
//	int c = a^b;
//	int count = count_one(c);
//	printf("%d\n", count);
//}
//
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	different_bit(a, b);
//	return 0;
//}