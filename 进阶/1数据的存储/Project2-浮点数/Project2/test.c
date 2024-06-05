#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <windows.h>

int main(void)
{
	unsigned int i;//无符号数最小值为0。死循环。-1在无符号数的表示很大很大。
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
		Sleep(1000);
		strlen("adaeda");
	}
	return 0;
}