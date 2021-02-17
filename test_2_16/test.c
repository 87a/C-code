#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char* c[] = { "enter", "new", "point", "first"};
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;

	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);

	return 0;
}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4] = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p[0]));
//	//int a[] = { 1,2,3,4 };
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//char arr1[] = "abcdef";
//	////数组名是首元素地址，2个例外
//	////1.sizeof(数组名)，数组名表示整个数组
//	////2.&数组名，数组名表示整个数组
//	////printf("%d\n", sizeof(a));
//	////printf("%d\n", sizeof(a + 0));
//	////printf("%d\n", sizeof(arr));
//	////printf("%d\n", sizeof(arr1));
//	//printf("%d\n", strlen(arr));
//	return 0;
//}