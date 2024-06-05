#include <stdio.h>

int main(void){
	int val;
	printf("请输入您想进入的楼层\n");
	scanf("%d",&val);
	switch(val){
		case 1: 
			printf("1层\n");
		break;
		case 2:
			printf("2层\n");
			break;
		case 3:
			printf("3层\n");
			break;
		default:
			printf("没有这一层\n");
			break;
	}
	return 0;
}