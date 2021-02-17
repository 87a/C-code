#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1

//typedef struct student
//{
//	char name[10];
//	short age;
//}stu;
//
//void qsort(void* base, size_t num, size_t width, int(*cmp)(const void *e1, const void *e2));	
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)(e1)-*(int*)(e2);
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 == *(float*)e2)return 0;
//	if (*(float*)e1 > *(float*)e2)return 1;
//	if (*(float*)e1 < *(float*)e2)return -1;
//}
//
//int cmpstubyage(const void* e1, const void* e2)
//{
//	return ((stu*)e1)->age - ((stu*)e2)->age;
//}
//
//int cmpstubyname(const void* e1, const void* e2)
//{
//	//比较名字就是比较字符串，不能直接用><=，应用strcmp()
//	return strcmp(((stu*)e1)->name, ((stu*)e2)->name);
//}
//void testint()
//{
//	int i = 0;
//	int arr[10] = { 1,3,4,9,5,7,2,8,10,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void testf()
//{
//	float f[] = { 9.0,8.0,7.0,6.5,6.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j< sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//
//void teststruct()
//{
//	stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmpstubyage);
//	int k = 0;
//	for (k = 0; k < sz; k++)
//	{
//		printf("%s ", s[k].name);
//		printf("%d\n", s[k].age);
//	}
//	qsort(s, sz, sizeof(s[0]), cmpstubyname);
//	for (k = 0; k < sz; k++)
//	{
//		printf("%s ", s[k].name);
//		printf("%d\n", s[k].age);
//	}
//}

//交换每一对字节
//void Swap(char* buf1, char*buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void*base, int sz, int width, int (*cmp)(void*e1, void*e2))
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟比较的对数
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			//两个元素的比较
//			if (cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
//			{
//				//交换
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//
//void test4()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//使用bubble_sort的程序员一定知道自己排序的是什么数据
//	//就应该知道如何比较待排序数组中的元素
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void test5()
//{
//	stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	int k = 0;
//	bubble_sort(s, sz, sizeof(s[0]), cmpstubyage);
//	for (k = 0; k < sz; k++)
//	{
//		printf("%s ", s[k].name);
//		printf("%d\n", s[k].age);
//	}
//	bubble_sort(s, sz, sizeof(s[0]), cmpstubyname);
//	for (k = 0; k < sz; k++)
//	{
//		printf("%s ", s[k].name);
//		printf("%d\n", s[k].age);
//	}
//}
//int main()
//{
//
//	//testint();
//	//testf();
//	//teststruct();
//	//test4();
//	test5();
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	void* pa = &a;//void*类型的指针不能进行解引用操作，不能进行加减整数的操作
//}