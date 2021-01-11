#define _CRT_SECURE_NO_WARNINGS

#include <string.h>

#include <assert.h>

#include <stdio.h>

//模拟实现strstr

char* my_strstr( const char* p1, const char* p2)
{
	assert(p1);
	assert(p2);

	//if (strlen(p1) < strlen(p2))
	//	return NULL;
	
	char* start1 = p1;
	char* start2 = p2;

	for (p1 = start1; *start1 != '\0'; p1 = start1)
	{
		while (*p1 == *p2)
		{
			if (*(p2 + 1) == '\0')
				return start1;
			p1++;
			p2++;
		}
		p2 = start2;
		start1++;
	}
	return NULL;
	
}

int main()
{
	const char arr1[20] = "welcome";
	const char arr2[] = "welcome";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
		printf("不是子串\n");
	else
		printf("%s \n", ret);
	return 0;
}
