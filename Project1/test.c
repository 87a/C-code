#define _CRT_SECURE_NO_WARNINGS 1#
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int* p = &arr;
	for (int i = 0; i < 10; i++) {
		*(p + i) = 1;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
//int main(){
//int a = 0x11223344;
//int* pa = &a;
//char* pc = &a;
//printf("%p\n", pa);
//printf("%p\n", pa+1);
//printf("%p\n", pc);
//printf("%p\n", pc+1);
//printf("%p\n", *pc);
//printf("%d\n", *(pc + 1));
//return 0;
//}