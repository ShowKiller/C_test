#include "stdlib.h"
#include "string.h"
#include "stdio.h"

void sortArray(int *a,int num) {

	//ð������
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
//����:1��������ڴ��׵�ַ���������Ч���ȴ��������ú���
//2 ʵ�ε�a ���βε�a���������Ͳ�һ��
//�β��е�����,���������������ָ�봦�� ����C���Ե���ɫ
//����,�β�д�ں�����,��д�ں�������һ����,ֻ�����ж�������

void main2() {

	
	int a[] = {33,654,4,123,223};
	int num,i;
	num = sizeof(a) / sizeof(a[0]);
	printArray(a, num);
	sortArray(a, num);
	
	printf("�����:");
	printArray(a, num);
	system("pause");
}