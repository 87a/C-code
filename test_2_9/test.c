#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<windows.h>

int main()
{
	float f = 5.5;
	//5.5
	//101.1
	//(-1)^0*1.011*2^2
	//S=0,M=1.011,E=2
	//0 10000001 01100000000000000000000
	//0x40b00000
	return 0;
}

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("%d\n", n);
//	printf("%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("%d\n", n);
//	printf("%f\n", *pFloat);
//	return 0;
//}
//float保存：（-1）^S*M*2^E
//9.0=1001.0=-1^0*1.001*2^3     S=0,M=1.001,E=3
//32位浮点数，最高位为S，8位为E，23位为M
//64位浮点数，最高位为S,11位为E，52位为M
//E在存储时要+127或1023

//int  main()
//{
//	unsigned int i = 0;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("helloworld\n");	
//	}
//	return 0;
//}
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
