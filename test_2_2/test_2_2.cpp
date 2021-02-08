#include<stdio.h>
#include<string.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);
}
//void swap(int* x, int* y)
//{
//	int t = 0;
//	t = *x;
//	*x = *y;
//	*y = t;
//
//}
//void bubbleSort(int arr[], int size)
//{
//	int i = 0, j = 0;
//	
//	for (i=0;i<size-1;i++)
//	{
//		int flag = 1;
//		for (j = 0; j < size-1-i; j++)
//		{
//			if (arr[j] > arr[j+1]) {
//				swap(&(arr[j]), &(arr[j+1]));
//				flag = 0;
//			}
//		}
//		if (flag) {
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3,4,5,1,7,8,6,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//}