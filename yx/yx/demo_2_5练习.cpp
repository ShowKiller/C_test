#include "stdafx.h"
#include <iostream>
#include <math.h>

double zubint(int);

int main2_5()
{
	using namespace std;
	cout << "����.��ֽ��!";
	int cd;
	int data;
	cout << "��������Ҫ���������: ";
	cin >> cd;
	data = zubint(cd);
	cout << "����˼�����:" << data << endl;
	cin.get();
	cin.get();
	return 0;
}
double zubint(int sts)
{
	return sts*365/30;

}