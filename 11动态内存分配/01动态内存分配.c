#include <stdio.h>
#include <malloc.h>

int main(void){
	
	int* p = (int*)malloc(4);
	printf("%d\n",*p);
	
	return 0;
}