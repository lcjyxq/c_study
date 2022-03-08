#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 0;
while (i <= 100)
	{
		 if (i % 2 != 0)
	
			printf("%d\n", i);
		
			 i++;
	}

	return 0;
}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p= 20;
//	printf("%d\n", a);
//	printf("%p\n", &a);
//	return 0;
//}