#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

void* my_memcpy(void*, const char*, size_t);
int main(void)
{
    int arr1[] = { 1,2,3,4,5,6,7 };
    int arr2[10] = { 0 };
    my_memcpy(arr2, arr1, 28);
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", arr2[i]);
    }
    
    return 0;
}
void* my_memcpy(void* dest, const char* src, size_t num) {
    assert(dest);
    assert(src);
    void* ret = dest;
    while (num--)
    {
        *(char*)dest = *(char*)src;
        dest = (char*)dest + 1;
        src = (char*)src + 1;
    }
    return ret;
}