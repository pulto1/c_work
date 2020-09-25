#define _CRT_SECURE_NO_WARNINGS

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。

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