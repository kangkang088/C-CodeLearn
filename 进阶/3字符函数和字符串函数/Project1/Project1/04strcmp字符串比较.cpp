#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

int my_strcmp(const char*, const char*);
int main(void)
{
	char arr1[20] = "zhangsan";
	char arr2[20] = "zhangsan";
	int ret = my_strcmp(arr1, arr2);
	if (ret < 0) {
		printf("<\n");
	}
	else if (ret == 0)
	{
		printf("==\n");
	}
	else
	{
		printf(">\n");
	}
	return 0;
}
int my_strcmp(const char* arr1, const char* arr2) {
	assert(arr1);
	assert(arr2);
	while (*arr1 == *arr2)
	{
		if (*arr1 == '\0') { return 0; }
		arr1++;
		arr2++;
	}
	return (*arr1 - *arr2);
}