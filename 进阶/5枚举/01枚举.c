#include <stdio.h>

enum Day{
	MON,
	TUES,
	WED,
	THUR,
	FRI,
	SAT,
	SUN
};
int main(void){
	enum Day d = FRI;
	printf("%d\n",d);
	return 0;
}