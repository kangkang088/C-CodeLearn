#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <errno.h>
#include <stdlib.h>

int main(void){
	int arr[10] = {0};
	int* p = (int*)malloc(40);
	if(p == NULL){
		printf("%s\n",strerror(errno));
		return 1;
	}
	int i = 0;
	
	for(i = 0;i < 10;i++){
		*(p + i) = i;
	}
	for(i = 0;i < 10;i++){
		printf("%d ",*(p+i));
	}
	return 0;
}