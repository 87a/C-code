#include <stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include "add.h"
//struct Book
//{
//	char name[20];
//	short price;
//};
int main()
{
	printf("%d\n", Add(2, 3));
	return 0;
}

//int isPrime(int a)
//{
//	for (int i = 2; i <= sqrt(a); i++)
//	{
//		if (a % i == 0)return 0;	
//	}
//	return 1;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (isPrime(i)==1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//void swap(int* x, int* y)
//{
//	int t = 0;
//	t = *x;
//	*x = *y;
//	*y = t;
//}

//int main() {
//	int num1 = 10;
//	int num2 = 20;
//	swap(&num1, &num2);
//	printf("num1=%d\n", num1);
//	printf("num2=%d\n", num2);
//	return 0;
//}

//int main() {
//	char arr[] = "hello world!";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "#####";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	srand((unsigned int)time(NULL));
//	ret = rand()%100;
//	printf("%d\n", ret);
//}

//int main()
//{
//	int i,j,count=0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a=0;
//	int low = 0; int high = (sizeof arr) / (sizeof arr[0])-1;
//	int mid;
//	scanf("%d", &a);
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (arr[mid]<a)
//			low = mid + 1;
//		if (arr[mid] > a)
//			high = mid - 1;
//		if (arr[mid] == a)
//		{
//			printf("×ø±êÎª%d\n", mid);
//			break;
//		}
//	}
//
//}