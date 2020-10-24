#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
////求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
////例如：2 + 22 + 222 + 2222 + 22222
//
//int sn(int a, int n)
//{
//	int i = 0;
//	int sum1 = a;
//	int tmp=a;
//	for (i = 0; i < n-1; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum1 += tmp;
//	}
//	return sum1;
//}
//int main()
//{
//	int a = 2;
//	int n = 5;
//	int sum;
//	sum = sn(a, n);
//	printf("%d\n", sum);
//	return 0;
//}
