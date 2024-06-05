#include <stdio.h>
#include <malloc.h>

struct Student{
	int age;
	float score;
	char name[100];
};

int main(void){
	int len;
	struct Student* pArr;
	printf("请输入学生的个数：");
	scanf("%d",&len);
	pArr = (struct Student *)malloc(len * sizeof(struct Student));
	
	for(int i = 0;i < len;i++){
		printf("请输入第%d个学生的信息：\n",i + 1);
		printf("年龄：");
		scanf("%d",&pArr[i].age);
		printf("分数：");
		scanf("%f",&pArr[i].score);
		printf("姓名：");
		scanf("%s",pArr[i].name);
	}
	for(int i = 0;i < len;i++){
		printf("第%d个学生的信息：\n",i + 1);
		printf("年龄：%d  ",pArr[i].age);
		printf("分数：%f  ",pArr[i].score);
		printf("姓名：%s  ",pArr[i].name);
		printf("\n");
	}
	return 0;
}