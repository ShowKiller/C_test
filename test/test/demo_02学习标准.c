#include "stdlib.h"
#include "string.h"
#include "stdio.h"

void sortArray(int *a,int num) {

	//冒泡排序法
	int i, j;
	int data, tmp;
	for (i = 1; i < num; i++)
	{
		for (j = 0; j < num - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = tmp;
			}
		}

	}
}
void printArray(int *a, int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		printf("%d", a[i]);
		printf("\n");
	}

}
//结论:1把数组的内存首地址和数组的有效长度传给被调用函数
//2 实参的a 和形参的a的数据类型不一样
//形参中的数组,编译器会把他当成指针处理 这是C语言的特色
//本质,形参写在函数上,和写在函数内是一样的,只不过有对外属性

void main2() {

	
	int a[] = {33,654,4,123,223};
	int num,i;
	num = sizeof(a) / sizeof(a[0]);
	printArray(a, num);
	sortArray(a, num);
	
	printf("排序后:");
	printArray(a, num);
	system("pause");
}