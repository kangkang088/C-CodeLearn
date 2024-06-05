#include <stdio.h>

struct Node{
	int data;
	struct Node * pNext;
};
struct Node * CreateList(void);
void TraverseList(struct Node *);
int main(void){
	struct Node * pHead;//头指针，存放头结点的地址
	pHead = CreateList();
	TraverseList(pHead);
	return 0;
} 