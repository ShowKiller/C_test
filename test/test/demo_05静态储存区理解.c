#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char * getStr1() {

	char *p1 = "abcdefg1";
	return p1;
}
char * getStr2() {

	char *p2 = "abcdefg2";
	return p2;
}

void main777777() {
	char *p1 = NULL;
	char *p2 = NULL;
	p1 = getStr1();
	p2 = getStr2();
	//打印p1 p2 所指向内存空间的数据
	printf("p1:%s\n", p1);
	printf("p2:%s\n", p2);
	//打印p1 p2 的值
	printf("p1:%d , p2:%d\n", p1, p2);
	system("pause");
	return;
}
//指针指向谁 就把谁的地址赋给指针
//指针变量 和 他所指内存空间变变量是两个不同的概念