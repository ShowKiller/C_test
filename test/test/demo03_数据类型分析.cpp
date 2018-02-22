#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;
//数据类型的用途
//数据类型的本质:固定大小内存块的别名
//b &b 数据类型 1.怎么定义一个数组类型 2.怎么定义一个数组类型指针 3. 怎么弄清楚数组类型和数组指针类型的关系 !!!重点,!

void main3() {
	
	int a; //告诉C编辑器分配4个字节的内存
	int b[10]; //告诉C编辑器分配40个字节的内存
	printf("b:%d, b+1:%d, &b:%d, &b+1:%d\n", b, b + 1, &b, &b + 1);

	printf("sizeof(b):%d \n", sizeof(b)); //40
	printf("sizeof(a):%d \n", sizeof(a)); //4
	//b+1 和 &b+1 结果不一样  因为 b 和 &b 所代表的数据类型不一样
	//b 代表数据首元素的地址
	//&b 代表整个数组的地址
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
//数据类型别名 typedef
void main5()
{

	Teacher1 t1;
	t1.age = 31;

	printf("hello...\n");
	cout << "Hello World!!" << endl;
	system("pause");
}