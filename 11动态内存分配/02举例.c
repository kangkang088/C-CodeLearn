#include <stdio.h>
#include <malloc.h>

int main(void){
	int len;
	int* pArr;
	printf("请输入您想动态分配的内存的元素个数:");
	scanf("%d",&len);
	pArr = (int*)malloc(sizeof(int) * len);//相当于动态构建一个一维数组，数组名为pArr，长度为len，类型为int，大小为4*len
	//使用时和静态数组类似
	//赋值
	for(int i = 0;i < len;i++){
		pArr[i] = i;
	}
	//打印
	for(int i = 0;i < len;i++){
		printf("%d\n",pArr[i]);
	}
	free(pArr);
}