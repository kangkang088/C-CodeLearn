#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

size_t my_strlen(const char []);
int main(void)
{
    char arr[] = "abcdef";
    size_t n = my_strlen(arr);
    printf("%u\n", n);
    return 0;
}
size_t my_strlen(const char arr[]) {
    assert(arr);//如果指针为空，报错。
    int length = 0;
    while (*arr != '\0')
    {
        length++;
        arr++;
    }
    return length;
}