#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#define PRINT(N) printf("the value of "#N" is %d\n", N)
int main(void)
{
	int a = 10;
	int b = 20;
	PRINT(a);
	PRINT(b);
	printf("the value of a is %d\n", a);
	printf("the value of b is %d\n", b);
	return 0;
}
