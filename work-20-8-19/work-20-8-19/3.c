//#define _CRT_SECURE_NO_WARNINGS
////写一个代码：打印100~200之间的素数
//#include<stdio.h>
//int main()
//{
//	int i = 100;
//	for (i = 100; i < 201; i++)
//	{
//		int s = 2;
//		for (s = 2; s <i; s++)
//		{
//			if (i%s == 0)
//			{
//				break;//如果i%s==0说明i一定不是素数，所以用直接跳出第二个for循环，让i的值加一
//			}
//			else
//			{
//				//这里主要是想让i和所有被他小的数都除一遍，用上面的if语句不断筛选
//				//在最后一个数i-1进来前，使用continue让它返回，使s得值一直加一
//				if (s < i-1 )
//				{
//					continue;
//				}
//				else
//				{
//					printf("%d  ", i);//最后这个数和所有比他小的数都出了一遍并且没有余数，那说明他一定是素数
//				}	
//			}
//		}
//	}
//	return 0;
//}
