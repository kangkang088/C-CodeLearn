#include <stdio.h>

int main(void){
 	int* p;
	int a = 5;
	p = &a;
	printf("%d\n",sizeof(p));
	return 0;
}