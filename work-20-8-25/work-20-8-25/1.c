#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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

////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
////���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
////���룺1729�������19
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

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������


//����
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

////�ǵݹ�ʵ����n�Ľ׳ˣ����������������)
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
