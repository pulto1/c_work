#define _CRT_SECURE_NO_WARNINGS
//给定两个数，求这两个数的最大公约数
#include<stdio.h>
int main()
{
	int a;
	int b;
	int i;
	int temp;
	scanf("%d%d",&a,&b);
	if (a < b)//这里的目的是保证两个数中a是较大的那个数，如果不是，则把大的那个数存到a里
	{
		temp = a;
		a = b;
		b = temp;
	}
	for (i = b; i > 1; i--)//这个循环的目的是让两个数同时和从较小的数开始的数相除，如不不能被整除，就减一继续除
                           //因为求得是最大公约数，所以从大往小里除，可以方便求解
	{
		if (a%i == 0 && b%i == 0)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}