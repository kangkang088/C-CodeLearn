#include <stdio.h>

union Un{
	int a;
	char c[5];	
};
int main(void){
	union Un u;
	printf("%d\n",sizeof(u));
	return 0;
}