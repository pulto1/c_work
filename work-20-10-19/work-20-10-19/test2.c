#define _CRT_SECURE_NO_WARNINGS

#include <assert.h>

#include <stdio.h>

//Ä£ÄâÊµÏÖstrcpy

char* my_strcpy(char* p1, const char*p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char *start = p1;
	while (*p2)
	{
		*(p1++) = *(p2++);
	}
	*(p1) = *(p2);
	return start;
}

int main()
{
	char arr1[20] = "welcome";
	const char arr2[] = "hellosdfa";
	my_strcpy(arr1, arr2);
	printf("%s \n", arr1);
	return 0;
}