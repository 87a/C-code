#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//统计不同的位数
int countDiffBit(int n,int m) 
{
	int temp = n ^ m;
	return countBitOne(temp);

}
int countBitOne(unsigned int a) {
	int count = 0;
	while (a) {
		a = a & a - 1;
		count++;
	}
	return count;
}

int main() {
	int a, b = 0;
	scanf("%d%d", &a, &b);
	int count=countDiffBit(a, b);
	printf("%d\n", count);
	return 0;
}

//int countBitOne(unsigned int a) {
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = countBitOne(a);
//	printf("%d\n", count);
//	return 0;
//}

//int i;
//int main()
//{
//	i--;
//	printf("%u\n", i);
//	if (i > sizeof(i)) //其他量与sizeof比较时会被转换为无符号数
//		printf("%c", '>');
//	else
//		printf("%c", '<');
//	return 0;
//}

//int main()
//{
//	int a = 10, b = 20, c = 30;
//	int* arr[] = { &a,&b,&c };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}