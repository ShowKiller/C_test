#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include<vector>

//const int ArSize = 20;
//text

//5.9�����ϰ
int main()
{	
	using namespace std;

	//9
	int xx;
	cin >> xx; //4
	for (int i = 0; i < xx; i++)
	{
		for (int ii = xx-i; ii > 1; ii--)
		{
			cout << ".";
		}
		for (int iii = 0; iii <=i ; ++iii)
		{
			cout << "*";

		}
		cout << endl;
	}


	cin.get();
	cin.get();
	return 0;
	//8
	/*string abc;
	int ii = 0;
	cin >> abc;
	while (abc !="done")
	{
		cout << abc<<" -- ";
		++ii;
		cin >> abc;
	}
	cout << ii;*/

	//��һ��
	//int f, s;
	//int temp = 0;
	//cin >> f; //��һ������
	//cin >> s; //�ڶ�������
	//while (f<=s)
	//{
	//	temp += f;
	//	f++;
	//}
	//cout << temp;

	//5.2
	//3
	//char xx;
	//int num = 0;
	//cin >> xx;
	//while (xx!='0')
	//{
	//	cout << xx ;
	//	++num;
	//	cin.get(xx);
	//}

	//4
	//double a = 10;
	//double b = 0.05;
	//double c = 100;
	//int e = 1;

	//while (c*b<10)
	//{
	//	c = c + c*b;
	//	e++;//�ڼ��� ����
	//	cout << c<<endl; //ÿ��Ǯ������
	//}
	//a = a*e + 100;
	//cout << e<<" -- "<< c<<" -- "<<a<<endl;
	//cin.get();
	//5
	//int shu[3][12] =
	//{
	//	{ 20,30,140,25,1,2,3,4,11,22,13,12 },
	//	{ 21,30,140,25,1,2,3,4,11,22,13,12 },
	//	{ 22,30,140,25,1,2,3,4,11,22,13,12 }
	//};
	//string yuefen[] =
	//{
	//	"yiyue",
	//	"eryue",
	//	"sanyue",
	//	"siyue",
	//	"wuyue",
	//	"liuyue",
	//	"qiyue",
	//	"bayue",
	//	"jiuyue",
	//	"shiyue",
	//	"shiyiyue",
	//	"shieryue",

	//};
	//int temp = 0;
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int ii = 0; ii < 12; ii++)
	//	{
	//		cout <<"��"<<i+1<<"�� -- " <<yuefen[ii] << " : " << shu[i][ii] << endl;
	//		temp += shu[i][ii];
	//	}
	//}
	////6

	//cout << temp;

	//7
	//struct car //�ṹ����
	//{
	//	string name;
	//	int year;

	//};
	//int *num = new int[2]; //�����м�������
	//car name[2];
	//
	//

	//for (int i = 0; i < 2; i++)
	//{
	//	cout << "����������м������� : \n";
	//	cin >> num[i];
	//	cout << "�������� : \n";
	//	/*cin >> name[i].name;*/
	//	//cin.getline(name[i].name, 50);

	//	cin.get(); //cin.get()�����������ջس���
	//	getline(cin,name[i].name);

	//	cout << "�������� : \n";
	//	cin >> name[i].year;
	//}
	//for (int ii = 0; ii < 2; ii++)
	//{
	//	cout << name[ii].year << " - " << name[ii].name << " -- " << num[ii] << endl;
	//}

	//cin.get();
	//cin.get();
	
}


//int main()
//{
//	using namespace std;
//	const int Cities = 5;
//	const int Years = 4;
//
//	string cities[Cities] =
//	{
//		"Gribble City",
//		"Gribble ",
//		"asdasd23",
//		"ciuiwen",
//		"asnnk"
//	};
//
//	int maxtemps[4][5] =
//	{
//		{ 96,100,87,88,22 },
//		{99,110,17,28,12},
//		{100,200,27,38,62},
//		{22,300,37,48,82}
//	};
//
//	for (int  city = 0; city < Cities; city++)
//	{
//		cout << cities[city] << ":\t";
//		for (int  year = 0; year < Years; year++)
//		{
//			cout << maxtemps[year][city]<<"  ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}



//int main()
//{
//	using namespace std;
//	int maxtemps[4][5] = 
//	{
//		{ 96,100,87,88,22 },
//		{99,110,17,28,12},
//		{100,200,27,38,62},
//		{22,300,37,48,82}
//	};
//
//	for (int row = 0; row < 4; row++)
//	{
//		for (int col = 0; col < 5; col++) {
//			cout << maxtemps[row][col] << "\t";
//			cout << endl;
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	using namespace std;
//	char ch;
//	int count = 0;
//	cout << "Enter your to quit:\n";
//	cin.get(ch);
//	while (ch !='#')
//	{
//		cout << ch;
//		++count;
//		cin.get(ch);
//	}
//	cout << endl << count << "#########";
//
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	char ch;
//	int count = 0;
//	cin.get(ch);
//	while (cin)
//	{
//		cout << ch;
//		--count;
//		cin.get(ch);
//
//	}
//
//
//	cout << endl << count << "charset red \n";
//
//
//	return 0;
//}


//waiting
//int main()
//{
//	using namespace std;
//	cout << "Enter the delay time, in seconds: ";
//	float secs; //10
//	cin >> secs;
//	clock_t delay = secs* CLOCKS_PER_SEC; //10���ӵ�ϵͳʱ��
//	cout << "starting\a\n";
//	clock_t start = clock();//ϵͳִ�� ѭ��ǰ��ʱ��
//	//clock() ϵͳ��ǰʱ��
//	while (clock() - start < delay) //ϵͳ��ǰʱ���ȥѭ��ǰ��ʱ��������� �����10����ʱ��, ֤���ȴ�ʱ���ȥ ִ����һ��
//		;
//	cout << "done\a\n";
//	cin.get();
//	cin.get();
//	return 0;
//}




//int main()
//{
//	using namespace std;
//	char name[ArSize];
//	cout << "Enter your name:\n";
//	cin >> name;
//	cout << "Here your name\n";
//	int i = 0;
//	while (name[i] != '\0')
//	{
//		cout << name[i] << " : " << int(name[i]) << endl;
//		i++;
//	}
//	cin.get();
//	return 0;
//}