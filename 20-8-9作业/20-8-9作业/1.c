#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int compare(int x, int y)
{
	int z;
	if (x-y>=0)
	{
		 z = x;
	}
	else
	{
		 z = y;
	}
	return z;

}
int main()
{
	int num1;
	int num2;
	printf("������������num1��num2\n");
	scanf("%d%d", &num1, &num2);
	int num3 = compare(num1, num2);
	printf("�������еĽϴ���%d\n", num3);
	return 0;
}