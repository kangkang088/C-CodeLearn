#include <stdio.h>

int main(void){
	int a[7] = {1,2,3,4,5,6,7};
	int i = 0,j = 6,t = 0;
	while(i < j){
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
	for(int i = 0;i < 7;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}