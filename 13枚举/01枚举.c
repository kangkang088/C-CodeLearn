#include <stdio.h>
enum WeekDay
{
	Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday	
};

int main(void){
	int day;
	//-5  0000 0101  ff ff ff  1111 1011     ff ff ff fb; 10... 00... 00... 0000 0101
 	
 	//    0101 1101是一个负数的补码,则 ff ff ff 0101 1101   1000 0..0.. 0..0.. 1010 0011  -a3 -163
 	day = 0xfffffffb;
 	printf("%d\n",day);
	return 0;
}