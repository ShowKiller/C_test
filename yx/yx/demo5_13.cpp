#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include<vector>

//const int ArSize = 20;
//text

//5.9编程练习
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

	//第一题
	//int f, s;
	//int temp = 0;
	//cin >> f; //第一个整数
	//cin >> s; //第二个整数
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
	//	e++;//第几年 递增
	//	cout << c<<endl; //每年钱的总数
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
	//		cout <<"第"<<i+1<<"年 -- " <<yuefen[ii] << " : " << shu[i][ii] << endl;
	//		temp += shu[i][ii];
	//	}
	//}
	////6

	//cout << temp;

	//7
	//struct car //结构数组
	//{
	//	string name;
	//	int year;

	//};
	//int *num = new int[2]; //储存有几辆汽车
	//car name[2];
	//
	//

	//for (int i = 0; i < 2; i++)
	//{
	//	cout << "请告诉我你有几辆汽车 : \n";
	//	cin >> num[i];
	//	cout << "出产场地 : \n";
	//	/*cin >> name[i].name;*/
	//	//cin.getline(name[i].name, 50);

	//	cin.get(); //cin.get()可以用于吸收回车符
	//	getline(cin,name[i].name);

	//	cout << "生产日期 : \n";
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
//	clock_t delay = secs* CLOCKS_PER_SEC; //10秒钟的系统时间
//	cout << "starting\a\n";
//	clock_t start = clock();//系统执行 循环前的时间
//	//clock() 系统当前时间
//	while (clock() - start < delay) //系统当前时间减去循环前的时间如果大于 输入的10秒钟时间, 证明等待时间过去 执行下一步
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