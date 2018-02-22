#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main()
{
	int a;
	a = 10;//直接赋值
	char *p;
	printf("&a:%d\n", &a);
	printf("hello...\n");
	//9435412
	{
		//p = 5240680; //间接赋值.  通过指针
		//*p = 300;
	}
	//间接赋值
	//*((int*)11795684) = 200;
	//对内存空间 能不能再取 别名...

	//printf("p:%d\n", p);
	printf("a:%d\n", a);
	system("pause");
	return;
}
void sub1() {


}