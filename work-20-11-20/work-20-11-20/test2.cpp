#define _CRT_SECURE_NO_WARNINGS

//��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ� % 20����
//���磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are % 20Happy��

class Solution {
public:
	void replaceSpace(char *str, int length)
	{
		char* ret = str;
		while (length)
		{
			if (*ret != ' ')
				ret++;
			else
			{
				int j = length;
				while (j)
				{
					*(ret + j + 2) = *(ret + j);
					j--;
				}
				*ret = '%';
				*(ret + 1) = '2';
				*(ret + 2) = '0';
				length += 2;
			}
			length--;
		}
	}
};
