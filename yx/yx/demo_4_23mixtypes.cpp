#include "stdafx.h"
#include <iostream>
#include <vector>
#include <array>

struct years_end
{
	int year;
};

int main_test_01()
{
	using namespace std;
	years_end s01, s02, s03;//��������
	s01.year = 1998; //��Ա��������ʳ�Ա
	years_end * pa = &s02; //�����ṹָ��
	pa->year = 1999; //��ӷ��ʱ���
	//��������ṹ
	years_end trio[3];
	//ʹ�ó�Ա���������Ԫ�س�Ա
	trio[0].year = 2003;
	//���� trio��һ������,trio[0].year�Ǹýṹ��һ����Ա.������������һ��ָ��.���Ҳ����ʹ�ü�ӳ�Ա�����
	(trio + 1)->year = 2004; //set trio[1].year = 2004;
	//�ɴ���ָ������
	const years_end * arp[3] = { &s01,&s02,&s03 };
	cout << arp[1]->year << endl;
	//�ɴ������������ָ��:
	const years_end **ppa = arp;
	auto ppb = arp;
	cout << (*ppa)->year << endl;
	cout << (*(ppb + 1))->year << endl;


	cout << s01.year << endl;
	cout << "s02��years = " << pa->year;
	cin.get();
	return 0;
}

int main_vector()
{
	using namespace std;
	vector<int> vi;
	int n;
	cin >> n;
	vector<double> vd(n);

	return 0;
}
int main_array()
{
	using namespace std;
	array<int, 5>ai;
	array<double, 4> ad = { 1.2,1.3,1.4,1.5 };
	cout << (int *)&ad;//???
	cin.get();
	return 0;
}
int main____999()
{
	using namespace std;
	double a1[4] = {1.2,2.4,3.6,4.8};
	vector<double> a2(4);
	//c98�еķ���
	a2[0] = 1.0 / 3.0;
	a2[1] = 1.0 / 5.0;
	a2[2] = 1.0 / 7.0;
	a2[3] = 1.0 / 9.0;

	//c++11��ʼ�� �����������
	array<double, 4> a3 = { 3.14,2.72,1.62,1.41 };
	array<double, 4> a4;
	a4 = a3;//����ͬ��С��������Ч
	cout << " a1[2]: " << a1[2] << " at: " << &a1[2] << endl;
	cout << " a2[2]: " << a2[2] << " at: " << &a2[2] << endl;
	cout << " a3[2]: " << a3[2] << " at: " << &a3[2] << endl;
	cout << " a4[2]: " << a4[2] << " at: " << &a4[2] << endl;
	cout << "///////////////////////////////////////////////////////////////////\n";

	cout << " a2[2]: " << a2[2] << " at: " << &a2[2] << endl;
	cout << " a3[2]: " << a3[2] << " at: " << &a3[2] << endl;
	cout << " a4[2]: " << a4[2] << " at: " << &a4[2] << endl;

	cin.get();
	return 0;
}