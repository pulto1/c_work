#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <math.h>
//
////求出0～100000之间的所有“水仙花数”并输出。
////“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
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
