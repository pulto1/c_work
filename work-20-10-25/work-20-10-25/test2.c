#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>

//Ä£ÄâÊµÏÖmemcpy

void* my_memcpy(void* p1, const void* p2, size_t count)
{
	assert(p1);
	assert(p2);
	void* ret = p1;
	while (count--)
	{
		*(char*)p1 = *(char*)p2;
		++(char*)p1;
		++(char*)p2;
	}
	return ret;
}

int main()
{
	const char arr1[] = "welcome";
	char arr2[20] = { 0 };
	my_memcpy(arr2, arr1 + 2, 4);
	
	return 0;
}