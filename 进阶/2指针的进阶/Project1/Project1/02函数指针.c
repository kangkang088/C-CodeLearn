#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Add(int, int);
int main(void)
{
    printf("%p\n", &Add);
    printf("%p\n", Add);

    //函数指针变量
    int (*pf)(int, int) = &Add;
    printf("%p\n", pf);

    return 0;
}
int Add(int x, int y) {
    return x + y;
}