#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#define SQUARE(x) ((x)*(x))
int main(void)
{
	int a = SQUARE(5+1);
	printf("%d\n", a);
	return 0;
}