#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////编写一个函数实现n的k次方，使用递归实现。
//
//int square(int n, int k)
//{
//	int i = 1;
//	if (i < k)
//	{
//		return n*square(n, k - 1);
//	}
//	else
//		return n;
//}
//
//int main()
//{
//	int n;
//	int k;
//	int a;
//	scanf("%d%d", &n,&k);
//	a = square(n, k);
//	printf("%d\n", a);
//	return 0;
//}

////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
////例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
////输入：1729，输出：19
//
//int DigitSum(int n)
//{
//	int ret;
//	if (n > 9)
//	{
//		ret = n % 10;
//		return ret + DigitSum(n / 10);
//	}
//	else
//		return n;
//}
//
//int main()
//{
//	int a;
//	int sum;
//	scanf("%d", &a);
//	sum = DigitSum(a);
//	printf("%d\n", sum);
//	return 0;
//}

//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。


//有误
void reverse_string(char *str)
{
	if (str[0] != '\0')
	{
		reverse_string(str+1);
		printf("%s ", &str[0]);
	}
}

int main()
{
	char arr[] = "wel";
	reverse_string(arr);
	return 0;
}

////非递归实现求n的阶乘（不考虑溢出的问题)
//
//int Fac(int n)
//{
//	int i = 1;
//	int z = 1;
//	while (i<=n)
//	{
//		z *= i;
//		i++;
//	}
//	return z;
//}
//
//int main()
//{
//	int n;
//	int ret;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d",ret);
//	return 0;
//}
