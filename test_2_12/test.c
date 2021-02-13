#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void print(char* c)
//{
//	printf("%s\n", *c);
//}
//
//int main()
//{
//	void(*p)(char*) = print;
//	(*p)("hello");
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	printf("%p\n", &Add);
	printf("%p\n", Add);
	int(*pa)(int, int) = Add;
	printf("%p\n", pa);
	printf("%d\n",(*pa)(2,3));
	printf("%d\n", (pa)(2, 3));//函数指针加不加*都可
	return 0;
}