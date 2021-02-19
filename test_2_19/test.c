#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//暴力求解
//void leftMove(char arr[], int len, int k)
//{
//	assert(arr);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}

//三步翻转法
//1.abcdef
//2.bafedc(分部翻转)
//3.cdedab(整体翻转)

//void reverse(char* left, char* right)
//{
//	while (left < right) 
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}

//void leftMove(char arr[],  int  k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr + k - 1);
//	reverse(arr+k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}


//int isLeftMove(char arr1[], char arr2[])
//{
//	int i = 0;
//	int len = strlen(arr1);
//	for (i = 0; i < len; i++)
//	{
//		leftMove(arr1, 1);
//		if (strcmp(arr1,arr2)==0) 
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int k = 0;
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	/*scanf("%d", &k);
//	leftMove(arr1,  k);
//	printf("%s\n", arr1);*/
//	if (isLeftMove(arr1,arr2) == 1)
//		printf("yes\n");
//	else 
//		printf("no\n");
//	return 0;
//}

//int main()
//{
//	char arr1[30] = "abc";
//	char arr2[] = "def";
//	char arr3[] = "bc";
//	//strcat(arr1, arr2);
//	strncat(arr1, arr1, 3);
//	char* ret = strstr(arr1, arr3);
//	printf("%s\n", arr1);
//	printf("%p\n", ret);
//	return 0;
//}

//杨氏矩阵查找
//通过最右上角元素确定位置
//int isInMatrix(int arr[3][3], int k, int *px, int *py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)y--;
//		else if (arr[x][y] < k) x++;
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 0;
//	
//	while (1) {
//		int x = sizeof(arr) / sizeof(arr[0]);
//		int y = sizeof(arr[0]) / sizeof(arr[0][0]);
//		scanf("%d", &k);
//		if (k == -1)break;
//		int ret = isInMatrix(arr, k, &x, &y);
//		if (ret == 1)
//		{
//			printf("yes,x=%d,y=%d\n", x, y);
//		}
//		else printf("no\n");
//	}
//	return 0;
//}

int main()
{
	//size_t = unsigned int;
	printf("%u\n", strlen("abc") - strlen("abcdef"));
	return 0;
}