#define _CRT_SECURE_NO_WARNINGS

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���

#include<stdio.h>
void product(int n)
{
	int i;
	int j;
	int b;
	for (i = 1; i <=n; i++)
	{
		int temp;
		temp = i;
		for (j = temp; j <=n; j++)
		{
			b = temp * j;
			if (b < 10)
			{
				if (temp < 10 && i < 10)
				    printf("%d*%d=%d      ", temp, j, b);
				else
					printf("%d*%d=%d     ", temp, j, b);

			}
			else if (10<=b<100)
			{
				if (temp < 10 && i < 10)
					printf("%d*%d=%d     ", temp, j, b);
				else
					printf("%d*%d=%d    ", temp, j, b);
			}
			else
				printf("%d*%d=%d  ", temp, j, b);

		}
		printf("\n");
	}
}
int main()
{
	int a;
	scanf("%d", &a);
	product(a);
	return 0;
}