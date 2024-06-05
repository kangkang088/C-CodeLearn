#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(void)
{
    int a = 288800;
    char* p = (char*)&a;
    for (int i = 0; i < sizeof(int); i++) {
        printf("%X ", *(p + i));
    }
    printf("\n");
    return 0;
}