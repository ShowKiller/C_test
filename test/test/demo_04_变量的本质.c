#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main()
{
	int a;
	a = 10;//ֱ�Ӹ�ֵ
	char *p;
	printf("&a:%d\n", &a);
	printf("hello...\n");
	//9435412
	{
		//p = 5240680; //��Ӹ�ֵ.  ͨ��ָ��
		//*p = 300;
	}
	//��Ӹ�ֵ
	//*((int*)11795684) = 200;
	//���ڴ�ռ� �ܲ�����ȡ ����...

	//printf("p:%d\n", p);
	printf("a:%d\n", a);
	system("pause");
	return;
}
void sub1() {


}