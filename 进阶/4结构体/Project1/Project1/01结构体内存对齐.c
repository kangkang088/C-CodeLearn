#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stddef.h>


struct S1
{
    char c1;
    int i;
    char c2;
};
struct S2
{
    char c1;
    char c2;
    int i;
};
int main(void)
{
    printf("%d\n", offsetof(struct S1,c1));
    printf("%d\n", offsetof(struct S1,i));
    printf("%d\n", offsetof(struct S1,c2));
    
    return 0;
}