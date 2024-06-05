#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#define MAX(x,y) ((x)>(y)?(x):(y))
int main(void)
{
	int a = 5;
	int b = 4;
	int m = MAX(a++, b++);
	printf("m = %d\n", m);
	printf("a = %d,b = %d\n", a,b);
	return 0;
}