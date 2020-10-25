#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
//（编程实现）。

int juc_num(int n)
{
	int sum=0 ;
	int ret=0 ;
	while ((ret+n) >1)
	{
		int tmp=n;
		sum += n;
		n =(n+ret)/ 2;
		ret = (tmp+ret) % 2;
		
	}
	if (n == 1)
		sum += 1;
	return sum;
}

int main()
{
	int money;
	int num;
	scanf("%d", &money);
	num = juc_num(money);
	printf("%d \n", num);
	return 0;
}
