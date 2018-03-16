#include "stdafx.h"
#include <cmath>
#include <iostream>
#include <istream>
#include <string>
#include <cstring>
#pragma warning(disable:4996)

int main0401()
{
	using namespace std;
	char char1[20];
	char char2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	cout << "Enter a kind feline: ";
	cin >> char1;
	cout << "Enter a kind feline: ";
	cin >> str1;
	cout << "Here are some felines:\n";
	cout << char1 << " " << char2 << " " << str1 << " " << str2 << endl;
	cout << "The third letter in " << char2 << " is " << char2[2] << endl;
	cout << "The third letter in " << str2 << " is " << str2[2] << endl;
	cin.get();
	cin.get();


	return 0;
}
int main_4_001()
{
	using namespace std;
	char charr[20];
	string str;
	cout << strlen(charr) << endl;
	cout << str.size() << endl;
	cin.getline(charr,20);
	getline(cin,str);
	cout << str<<charr << endl << strlen(charr) << endl << str.size();
	cin.get();
	cin.get();
	return 0;
}
//structur.cpp

struct inflatable
{
	std::string name;
	float volume;
	double price;

};

//int main4_002()
//{
//	using namespace std;
//
//	inflatable yaxing =
//	{
//		"Zhao daren",
//		1.88,
//		29.99
//	};
//	inflatable xiaoxing =
//	{
//		"Zhao xiaoren",
//		3.14159,
//		32.99
//	};
//	cout << yaxing.name << "  and " << xiaoxing.name << "!\n";
//	cout << "You can have both for $" << yaxing.price + xiaoxing.price<<endl;
//
//	return 0;
//}
////指针
//int main4_003()
//{
//	using namespace std;
//	int hig = 5;
//	int * a = new int[20];
//	delete [] a;
//	int * p = &hig;
//	cout << hig<<endl << &hig<<endl << *p<<endl << p<<endl;
//	cin.get();
//	return 0;
//}
////4.8.2 指针小结
//int main4_004()
//{
//	//int * a;
//	//double *pn;
//	//char * pc;
//	//double *pa;
//	//double bubb = 3.2;
//	//pn = &bubb;
//	//pc = new char;
//	//pa = new double[10];
//	using namespace std;
//	int tacos[10] = { 5,2,8,4,1,2,2,4,6,8 };
//	int * pt = tacos;
//	cout << pt << endl;
//	cout << *pt << endl;
//	pt = pt + 1;
//	cout << *pt << endl;
//	int * pe = &tacos[9];
//	cout << *pe << endl;
//	pe = pe - 1;
//	cout << *pe << endl;
//	int diff = pe - pt;
//	cout << diff;
//	cin.get();
//	return 0;
//	return 0;
//}

int main4_002()
{
	using namespace std;
	int * pt = new int[10];
	*pt = 5;
	cout << *pt << endl;
	pt[0] = 6;
	cout << *pt;
	pt[9] = 44;
	int coat[10];
	*(coat + 4) = 12;


	cin.get();
	return 0;
}

int main4_003()
{
	using namespace std;
	char an[20] = "bear";
	const char * bird = "wren";
	char * ps;
	cout << an << " and " << bird << "\n"; //打印an的值和 bird的指针
	cout << *bird<<endl; //打印bird的值

	cin >> an;
	ps = an;
	cout << ps << "!\n"; //这个是ps的指针
	cout << *ps << "\n"; //这个是ps的值
	cout << an << " at " << (int *)an << endl;//(int *)是将name转换为指向int型变量的指针，所以再用cout 输出，结果就是该名字字符串的首字符的地址。
	cout << ps << " at " <<(int *)ps << endl;

	ps = new char[strlen(an) + 1];
	strcpy(ps, an);
	cout << an << " at " << (int *)an << endl;
	cout << ps << " at " << (int *)ps << endl;
	delete[]ps;

	cin.get();
	cin.get();
	return 0;
}
struct xin
{
	char name[20];
	float volume;
	double price;
};
int main4_004()
{
	using namespace std;
	xin *ps = new xin;
	cout << "Enter of xin item:\n";
	cin.get(ps->name, 20);
	cout << "Enter volume:\n";
	cin >> (*ps).volume;
	cout << "Enter price:\n";
	cin >> ps->price;
	cout << (*ps).name << endl << ps->volume << endl << ps->price;

	cin.get();
	cin.get();
	return 0;

}
