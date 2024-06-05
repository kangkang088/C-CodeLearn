#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(void)
{
    char a = -1;       //10000001 - 11111111 - ff
    signed char b = -1;//10000001 - 11111111 - ff
    unsigned char c = -1;//11111111 - 255
    //ff 11111111 - 10000001
    // 01
    printf("a = %d,b = %d,c = %d\n", a, b, c);
    return 0;
}