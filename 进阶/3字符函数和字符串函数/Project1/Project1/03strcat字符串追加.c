#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strcat(char*, const char*);
int main(void)
{
    char arr1[20] = "hello ";
    my_strcat(arr1, "world");
    printf("%s\n", arr1);
    return 0;
}
char* my_strcat(char* des, const char* src) {
    char* temp = des;
    assert(des);
    assert(src);
    while (*des)
    {
        des++;
    }
    while (*des++ = *src++)
    {
        ;
    }
    return temp;
}