#define _CRT_SECURE_NO_WARNINGS

//请实现一个函数，将一个字符串中的每个空格替换成“ % 20”。
//例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are % 20Happy。

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
