#include <stdio.h>

int main(void){
	int a[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 4;j++){
			printf("%d  ",a[i][j]);
		}
	}
	printf("%d\n");
	printf("总大小 = %d\n",sizeof(a));
	printf("行数 = %d\n",sizeof(a)/sizeof(a[0]));
	printf("元素个数 = %d\n",sizeof(a)/sizeof(a[0][0]));
	printf("列数 = %d\n",sizeof(a[0])/sizeof(a[0][0]));
	printf("第一个元素的地址 = %p\n",a);
	printf("第一行的地址 = %p\n",a[0]);
	printf("第二行的地址 = %p\n",a[1]);
	printf("第三行的地址 = %p\n",a[2]);
	return 0;
}