#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strcpy(char*, const char*);

int main(void)
{
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";

	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
char* my_strcpy(char* des, const char* source) {

	char* temp = des;
	assert(des);
	assert(source);
	while (*source != '\0')
	{
		*des++ = *source++;

	}
	*des = *source;// \0
	return temp;
}