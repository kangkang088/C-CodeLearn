#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

const char* my_strstr(const char*, const char*);
int main(void)
{
    char email[] = "11808131844@qq.com";
    char substr[] = "31844";
    char* ret = my_strstr(email, substr);
    if (ret == NULL) {
        printf("×Ó´®²»´æÔÚ\n");
    }
    else
    {
        printf("%s\n", ret);
    }
    return 0;
}
const char* my_strstr(const char* str1, const char* str2) {
    assert(str1 && str2);
    const char* s1 = str1;
    const char* s2 = str2;
    const char* p = str1;
    while (*p)
    {
        s1 = p;
        s2 = str2;
        while (*s1 != '\0' && * s2 != '\0' && *s1 == *s2)
        {
            s1++;
            s2++;
        }
        if (*s2 == '\0')
            return p;
        p++;
    }
    return NULL;
}