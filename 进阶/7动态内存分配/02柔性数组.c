#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

/*struct St{
	int a;
	int arr[10];
	int arr1[];
};
int main(void){
	struct St* s = (struct St*)malloc(sizeof(struct St) + 12);
	for(int i = 0;i < 3;i++){
		s->arr1[i] = i;
	}for(int i = 0;i < 3;i++){
		printf("%d ",s->arr1[i]);
	}
	printf("%d\n",sizeof(*s));
	return 0;
}*/
void Print(int[],int);
int main(void){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	Print(arr,sizeof(arr)/sizeof(arr[0]));
}
void Print(int arr[],int len){
	for(int i = 0;i < len;i++){
		printf("%d ",arr[i]);
	}
}