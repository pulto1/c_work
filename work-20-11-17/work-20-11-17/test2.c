#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
////写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//
//struct S
//{
//	int a;
//	double b;
//	char c;
//	int d;
//};
//
//#define OFFSETOF(sn, mn) (size_t) &(((sn*)0) -> mn)
//
//int main()
//{
//	printf("%d \n", OFFSETOF(struct S, a));
//	printf("%d \n", OFFSETOF(struct S, b));
//	printf("%d \n", OFFSETOF(struct S, c));
//	printf("%d \n", OFFSETOF(struct S, d));
//	return 0;
//}
