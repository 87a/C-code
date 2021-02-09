#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<windows.h>

int  main()
{
	unsigned int i = 0;
	for (i = 0; i <= 255; i++)
	{
		printf("helloworld\n");	
	}
	return 0;
}
//int main()
//{
//	unsigned int i = 0;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(500);
//	}
//	return 0;
//}

//int main()
//{
//	char a = 1024;
//	printf("%u", a);
//	return 0;
//}


//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d\n%d\n%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;
//	printf("%x\n", *pa);
//	return 0;
//}

//char* myStrcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		
//	}
//	return ret;
//}
//
//int main()
//{
//	char str1[] = "###############";
//	char str2[] = "bit";
//	
//	printf("%s\n", myStrcpy(str1, str2));
//	return 0;
//}
