#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c = 1;
	printf("%u\n", sizeof c);
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(!c));
	return 0;
}

//struct stu {
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main() {
//	int a = 10;
//	struct stu s1 = { "张三",20,"2019010305" };
//	struct stu* ps = &s1;
//	printf("%s\n", s1.name);
//	printf("%d\n", ps->age);
//	return 0;
//}

//int main() {
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	/*i = a++ && ++b && d++;*/
//	i= a++ || ++b || d++;
//	printf("%d %d %d %d ", a, b, c, d);
//	return 0;
//}


//int main() {
//	int a = 22;
//	printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//sizeof后面的表达式不会生效
//	printf("%d\n", s);
//	return 0;
//}
//统计1的个数
//int main() {
//	int num = 0, count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i == 0; i < 32; i++) {
//		if (1 == ((num >> i) & 1))count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main() {
//	int a = 3, b = 5;
//	a = a ^ b;
//	b = a^b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}

//int main() {
//	int a = 5;
//	printf("a^0=%d\n", a ^ 0);
//	printf("a^a=%d\n", a ^ a);
//	return 0;
//}
//int main() {
//	int a = -16;
//	printf("%d\n", a >> 1);
//	printf("%d\n", a <<1);
//	return 0;
//}