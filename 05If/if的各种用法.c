#include <stdio.h>
#include <math.h>

int main(void){
	//if(3>2){
	//	printf("welcome to world!\n");
	//}
	
	//int i,j;
	//i = 5;
	//j = 10;
	//if(i > j){
	//	printf("%d\n",i);
	//}else{
	//	printf("%d\n",j);
	//}
	
	/*int i,j;
	i = 5;
	j = 10;
	if(i > j){
		printf("%d\n",i);
	}else if(i == j){
		printf("i和j相等");
	}else{
		printf("%d\n",j);
	}*/
	
	/*int	score;
	printf("请输入您的分数\n");
	scanf("%d",&score);
	if(score >= 90){
		printf("您的分数等级为优\n");
	}else if(score >= 80){
		printf("您的分数等级为良\n");
	}else if(score >= 70){
		printf("您的分数等级为一般\n");
	}else if(score >= 60){
		printf("您的分数等级为差\n");
	}else {
		printf("您的分数不及格\n");
	}*/
	
	/*int arr[] = {1,5,79,716,97,995,79857,874,954487,497,9087,8,745548,784,6514,15,464};
	for(int i = 0;i < sizeof(arr)/sizeof(arr[0]) - 1;i++){
		for(int j = 0;j < sizeof(arr)/sizeof(arr[0]) - i - 1;j++){
			if(arr[j] < arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i = 0;i < sizeof(arr)/sizeof(arr[0]);i++){
		printf("%d\n",arr[i]);
	}*/
	
	/*printf("请输入一个数，判断是否为素数\n");
	int a;
	scanf("%d",&a);
	int isSu = 0;
	for(int i = 2;i <= a-1;i++){
		if((a%i)==0){
			printf("%d不是素数\n",a);
			isSu = 1;
			return 0;
		}
	}
	if(isSu == 0){
		printf("%d是素数\n",a);
	}*/
	
	printf("请输入一个数，判断是否为回文数\n");
	int a;
	scanf("%d",&a);
	int temp = a;
	int i = 0;
	while(a>0){
		a = a/10;
		i++;
		
	}
	int arr[i];
	int j = 0;
	while(temp > 0){
		int ge = temp % 10;
		arr[j] = ge;
		temp = temp / 10;
		j++;
	}
	for(int i = 0;i < sizeof(arr)/sizeof(arr[0]);i++){
		printf("%d\n",arr[i]);
	}
	int isHui = 0;
	for(int i = 0;i < sizeof(arr)/sizeof(arr[0]);i++){
		if(arr[i] != arr[sizeof(arr)/sizeof(arr[0]) - 1 - i]){
			isHui = 1;
			printf("不是回文数\n");
			return 0;
		}
	}
	if(isHui == 0){
		printf("是回文数\n");
	}
	return 0;
}