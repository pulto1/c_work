#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <math.h>
//
////���0��100000֮������С�ˮ�ɻ������������
////��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//
//int num(int i)
//{
//	int count = 0;
//	while (i)
//	{
//		i /= 10;
//		count++;
//	}
//	return count;
//}
//
//int square_sum(int n)
//{
//	int sum = 0;
//	int a;
//	int b = num(n);
//	while (n)
//	{
//		a = n % 10;
//		sum += pow(a, b);
//		n /= 10;
//	}
//	return sum;
//}
//
//int main()
//{
//	int i = 0;
//	int ret;
//	for (i = 0; i <= 10000; i++)
//	{
//		ret = square_sum(i);
//		if (ret == i)
//			printf("%d  ", i);
//	}
//	return 0;
//}
