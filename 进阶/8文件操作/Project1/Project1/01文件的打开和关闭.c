#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(void)
{
    FILE* pf = fopen("test.txt", "r");
    if (pf == NULL) {
        printf("%s\n", strerror(errno));
        return 1;
    }

    int r = fclose(pf);
    pf == NULL;
    if (r == 0) {
        printf("¹Ø±Õ³É¹¦£¡");
    }
    return 0;
}