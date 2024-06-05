#include <stdio.h>

int main(void){
	int n;
	int f1,f2,f3;
	f1 = 1;
	f2 = 2;
	printf("请输入斐波那契数列的位次\n");
	scanf("%d",&n);
	if(n == 1)
		printf("%d\n",f1);
	if(n == 2)
		printf("%d\n",f2);
	if(n >= 3){
		for(int i = 3;i <= n;i++){
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
		printf("%d\n",f3);
	}
	return 0;
}