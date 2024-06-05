#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>

struct St {
	int age;
	char name[50];
	float score;
};
int main(void)
{
	/*struct St s = {0};
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL) {
		printf("%s\n", strerror(errno));
		return 1;
	}

	
	fscanf(pf, "%d %s %f", &(s.age), s.name, &(s.score));
	printf("%d %s %f", s.age, s.name, s.score);

	fclose(pf);
	pf = NULL;*/


	return 0;
}