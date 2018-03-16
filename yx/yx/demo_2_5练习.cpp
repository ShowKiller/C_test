#include "stdafx.h"
#include <iostream>
#include <math.h>

double zubint(int);

int main2_5()
{
	using namespace std;
	cout << "亚星.造纸厂!";
	int cd;
	int data;
	cout << "请输入你要输出的年龄: ";
	cin >> cd;
	data = zubint(cd);
	cout << "你活了几个月:" << data << endl;
	cin.get();
	cin.get();
	return 0;
}
double zubint(int sts)
{
	return sts*365/30;

}