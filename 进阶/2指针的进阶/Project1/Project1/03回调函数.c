#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <search.h>

void bubule_sort(int[], int);
int compare(const void*, const void*);
int main(void)
{
    int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
    char arrc[] = { 'g','f','e','d','c','b','a','x' };
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubule_sort(arr, sz);
    qsort(arrc, 8, sizeof(arrc[0]), compare);
    for (int i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 8; i++) {
        printf("%c ", arrc[i]);
    }
    return 0;
}
int compare(const void* e1, const void* e2) {
    return *((char*)e1) - *((char*)e2);
}
void bubule_sort(int arr[], int sz) {
    int flag = 1;
    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = 0; j < sz - i- 1; j++)
        {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 0;
            }
        }
        if (flag == 1) {
            return;
        }
    }
    return;
}