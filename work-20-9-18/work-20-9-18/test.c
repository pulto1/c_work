#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
//�����ʵ�֣���

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
