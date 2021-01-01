#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

void le_revolve(char *p, int j, int sz)
{
	char ret = 0; //定义一个中间变量来存放字符串最后一个元素
	for (int l = 0; l < j; l++) //外循环 旋转几个元素则执行几次
	{
		ret = *(p + sz - 1); //存放最后一个元素
		*(p + sz - 1) = *p; //把第一个元素放到最后一个元素的位置，也就是实现左旋
		int i = 0;
		for (i = 0; i < sz - 1; i++) //内循环，把除第一个元素外的后面的元素依次向前挪一个位置
		{
			if (i == sz - 2) //由于左旋后最后一个元素发生变化，倒数第二个元素存放左旋前最后一个元素，也就是我们在中间变量中存放的元素
				*(p + i) = ret;
			else
				*(p + i) = *(p + i + 1); //倒数第二个元素前的元素依次存放自身下一个位置的元素
		}
	}
}

int main()
{
	char arr[] = "ABCD";
	int sz = strlen(arr);
	int k = 0;
	printf("左旋前字符串: %s\n", arr);
	printf("请输入需要左旋字符串中的多少个字符： ");
	scanf("%d", &k);
	le_revolve(arr, k, sz); //传递的三个参数分别是数组首元素地址、要左旋的位数、字符串长度
	printf("左旋后字符串: %s\n", arr);
	return 0;
}