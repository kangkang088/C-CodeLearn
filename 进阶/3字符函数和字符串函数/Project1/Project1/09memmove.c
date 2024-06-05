#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

void* my_memmove(void*, const void*, size_t);
int main(void)
{
    int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
    //int arr2[10] = { 0 };
    my_memmove(arr1 + 2, arr1, 20);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }

    return 0;
    return 0;
}
void* my_memmove(void* dest, const void* src, size_t num) {
    assert(dest && src);
    void* ret = dest;
    if (dest < src) {
        while (num--)
        {
            *(char*)dest = *(char*)src;
            dest = (char*)dest + 1;
            src = (char*)src + 1;
        }
    }
    else
    {
        while (num--)
        {
            *((char*)dest + num) = *((char*)src + num);
        }
    }
    return ret;
}