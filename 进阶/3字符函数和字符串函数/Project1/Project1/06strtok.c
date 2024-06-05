#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main(void)
{
    char email[] = "1808131844@qq.com";
    const char* sep = "@.";
    char cp[30] = { 0 };
    strcpy(cp, email);
    char* ret =  strtok(cp, sep);
    printf("%s\n", ret);
    ret = strtok(NULL, sep);
    printf("%s\n", ret);
    ret = strtok(NULL, sep);
    printf("%s\n", ret);
    return 0;
}