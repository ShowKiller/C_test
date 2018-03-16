#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


char *getMem(int num) {
	
	char *p1 = NULL;
	p1 = (char *)malloc(sizeof(char) * num);
	if (p1 == NULL)
	{
		return NULL;
	}
	return p1;
}
void main() {
	printf("hello...\n");
	system("pause");
	return;
}