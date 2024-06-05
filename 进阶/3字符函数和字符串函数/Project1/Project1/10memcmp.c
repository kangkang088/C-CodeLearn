#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main(void)
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,3,2 };
	int ret = memcmp(arr1, arr2,12);
	printf("%d\n", ret);
	return 0;
}