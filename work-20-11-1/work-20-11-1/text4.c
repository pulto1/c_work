#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>

//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�

void check(int *p, int sz)
{
	assert(p);

	printf("���������ǣ�");
	int i = 0;
	
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		int tmp = 0;
		for (j = 0; j < sz; j++)
		{
			if (p[i] == p[j])
				tmp++;

		}
		if (tmp == 1)
		{
			printf("%d ", p[i]);
		}
	}
	printf("\n");
}

int main()
{
	int arr[10] = { 1, 1, 2, 2, 3, 4, 4, 5, 6, 6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	check(arr, sz);
	return 0;
}
