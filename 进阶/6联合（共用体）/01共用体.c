#include <stdio.h>

union Un{
	int a;
	char c;	
};
struct St{
	int a;
	char c;
};
int main(void){
	union Un u;
	struct St s;
	printf("%d\n",sizeof(u));
	printf("%p\n",&u);
	printf("%p\n",&(u.c));
	printf("%p\n",&(u.a));
	return 0;
}