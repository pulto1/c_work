#define _CRT_SECURE_NO_WARNINGS
//���������������������������Լ��
#include<stdio.h>
int main()
{
	int a;
	int b;
	int i;
	int temp;
	scanf("%d%d",&a,&b);
	if (a < b)//�����Ŀ���Ǳ�֤��������a�ǽϴ���Ǹ�����������ǣ���Ѵ���Ǹ����浽a��
	{
		temp = a;
		a = b;
		b = temp;
	}
	for (i = b; i > 1; i--)//���ѭ����Ŀ������������ͬʱ�ʹӽ�С������ʼ����������粻���ܱ��������ͼ�һ������
                           //��Ϊ��������Լ�������ԴӴ���С��������Է������
	{
		if (a%i == 0 && b%i == 0)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}