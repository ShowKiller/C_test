#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
#include <float.h>

int main3_9_1()
{
	using namespace std;
	unsigned int a = 33;
	char b = 65;
	char c = 'a';
	cout << a <<int(b)<<c<< endl;
	cin.get();
	//const int code = 66;
	//int x = 66;
	///*char c1 = {31325};*/
	//char c2 = 66;
	//char c3 = code;
	////char c4 = {x};
	//x = 31325;
	//char c5 = x;
	//cout << x << endl << c2 << endl << c3 << endl  << endl << c5 << endl;
	//cin.get();
	return 0;
}
int main3_9_2()
{
	using namespace std;
	const double hs = 1.4;
	int a;
	double b;
	cout << "�������������___\b\b\b";
	cin >> a;
	b = hs*a;
	cout << "\a�������Ϊ" << b << "Ӣ��";

	cin.get();
	cin.get();
	return 0;
}
int main3_9_3()
{
	using namespace std;
	int a, b, c;
	double d, e, f;
	const double mmm = 0.0254;
	const double nnn = 2.2;
	cout << "��߼�Ӣ��";
	cin >> a;
	cout << "��߼�Ӣ��";
	cin >> b;
	cout << "�����ض��ٰ�";
	cin >> c;
	d = (a * 12 + b)*mmm;
	e = b*nnn;
	cout << "������Ϊ" << d << "�������Ϊ" << e<<endl;
	f = (e / d)*(e/d);
	cout << "���BMIΪ: " << f;
	cin.get();
	cin.get();
	cin.get();
	return 0;
}

//int main()
//{	
//	using namespace std;
//	//short a = 12345;
//	unsigned short  a = 344;
//	cout << a;
//	cin.get();
//	return 0;
//}

int main3_9_4()
{
	using namespace std;
	const int ArrNumber = 20;
	char name[ArrNumber];
	char dessert[ArrNumber];

	cout << "\aEnter your name:\n";
	cin.getline(name, ArrNumber);
	cout << "\aEnter your dessert:\n";
	cin.getline(dessert, ArrNumber);
	cout << "I have some " << dessert << " for your name " << name;
	cin.get();
	cin.get();
	return 0;
}