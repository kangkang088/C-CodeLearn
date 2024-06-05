#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stddef.h>

#define OFFSETOF(type,m_name) (size_t)&(((type*)0)->m_name)
struct S
{
    char c1;
    int i;
    char c2;
};
int main(void)
{
    struct S s = { 0 };
    printf("%d\n", offsetof(struct S, c1));
    printf("%d\n", offsetof(struct S, i));
    printf("%d\n", offsetof(struct S, c2));
    return 0;
}