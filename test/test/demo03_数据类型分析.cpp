#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;
//�������͵���;
//�������͵ı���:�̶���С�ڴ��ı���
//b &b �������� 1.��ô����һ���������� 2.��ô����һ����������ָ�� 3. ��ôŪ����������ͺ�����ָ�����͵Ĺ�ϵ !!!�ص�,!

void main3() {
	
	int a; //����C�༭������4���ֽڵ��ڴ�
	int b[10]; //����C�༭������40���ֽڵ��ڴ�
	printf("b:%d, b+1:%d, &b:%d, &b+1:%d\n", b, b + 1, &b, &b + 1);

	printf("sizeof(b):%d \n", sizeof(b)); //40
	printf("sizeof(a):%d \n", sizeof(a)); //4
	//b+1 �� &b+1 �����һ��  ��Ϊ b �� &b ��������������Ͳ�һ��
	//b ����������Ԫ�صĵ�ַ
	//&b ������������ĵ�ַ
	printf("hello...\n");
	cout << "Hello World!!" << endl;
	system("pause");
}
struct Teacher
{
	char name[64];
	int age;
};
typedef struct Teacher1
{
	char name[64];
	int age;
}Teacher1;
//�������ͱ��� typedef
void main5()
{

	Teacher1 t1;
	t1.age = 31;

	printf("hello...\n");
	cout << "Hello World!!" << endl;
	system("pause");
}