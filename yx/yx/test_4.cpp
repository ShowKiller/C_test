#include "stdafx.h"
#include <iostream>
#include <array>
#include <string>
#include <vector>


//复习题
//int main_fuxiti()
//{
//	using namespace std;
//	//1
//	char actor[30];
//	short betsie[100];
//	float chuck[13];
//	long double dipsea[64];
//
//	//2
//	array<char, 30> actor1;
//	array<short, 100> betsie1;
//	array<float, 13> chuck1;
//	array<long double, 64> dipsea1;
//
//	//3
//	int ii[5] = {1,3,5,7,9};
//	
//	//4
//	int iii = ii[0] + ii[4];
//	cout << iii << endl;
//
//	//5 
//	//第一种方法
//	float ideas[4] = {1.1,2.2,3.3,4.4};
//	ideas[1];
//	//第二种方法
//	float *aa = new float[sizeof(ideas) / sizeof(ideas[0])];
//	aa = ideas;
//	cout << ideas[1] << "  " << *(aa + 1) << endl;
//
//	//6
//	char che[] = "cheeseburger";
//	cout <<"che: "<< strlen(che) << endl;
//
//	//7
//	string wod = "Waldorf Salad";
//	cout << wod << endl;
//
//	//8
//	struct fish
//	{
//		char pingzhong[100];
//		int zhongliang;
//		float changdu;
//	};
//
//	//9
//	fish  bbb = { "三文鱼",10,2.3 };
//	cout << bbb.pingzhong << endl;
//	//10
//	enum Response
//	{
//		No = 0,
//		Yes = 1,
//		Maybe = 2,
//	};
//	//11
//	double tel = 1.23;
//	//double * tell = new double;
//	double * tell = &tel;
//	tell = &tel;
//	cout << tell << endl<<&tel<<endl;
//	//加这句话系统会崩溃 因为tel 和tell的内存地址一样  但是不加又会泄露内存
//	//delete tell;
//
//	//12
//	float treacle[10] = {1,2,3,4,5,6,7,8,9,10};
//	float * tt = new float[sizeof(treacle) / sizeof(treacle[0])];
//	tt = treacle;
//	cout << *tt <<endl<< *(tt + 9) << endl;
//
//	//13
//	int shi;
//	cin >> shi;
//	int * shi1 = new int[shi];
//	vector<int> shi11(shi);
//
//	//14
//	cout << (int *)" Home of the jolly bytes";
//	//打印出个内存地址
//
//	//15
//	fish *pople = new fish;
//	cout << "Enter kind of fish :";
//	cin >> pople->pingzhong;
//	//16
//	//cin->address  遇到空格会终止,  cin.getline() 遇到空格不会终止;
//
//	//17
//	vector<string> st1(10);
//	array<string, 10> st2;
//
//	cin.get();
//	cin.get();
//	return 0;
//}


//编程练习
int main_bclx()
{
	using namespace std;
	struct CandyBar
	{
		string pinpai = "yaxing";
		double zhongliang = 2.3;
		int kll = 33;
	};
	
	//3 and 4
	/*string name;
	string xing;
	cin >> name;
	cin >> xing;
	cout << "Here's string:" << name << "," << xing;*/

	//5 and 6
	
	CandyBar snack;
	//CandyBar snack = { "Mocha Munch",2.5,350 };
	//cout << snack.pinpai << snack.zhongliang << snack.kll;

	//7
	//struct ps
	//{
	//	string gongsi;
	//	float zhijing;
	//	double zhongliang;
	//};
	//ps pss;
	//
	//cout << "请输入你的名字,直径,重量\n:";
	//getline(cin, pss.gongsi);
	//cin >> pss.zhijing;
	//cin >> pss.zhongliang;
	//cout << pss.gongsi<<pss.zhijing<<pss.zhongliang;

	//8
	//string * xin8 = new string[3];
	//for (int i = 0; i<3; i++)
	//	cin >> xin8[i];

	//for (int i = 0; i<3; i++)
	//	cout << xin8[i] << " ";
	////释放arr数组 
	//delete[] xin8;
	
	//10
	//array<float, 3> cj;

	//for (int i = 0; i<3; i++)
	//	cin >> cj[i];

	//cout << " 3 " << (cj[0] + cj[1]+cj[2]) / 3 << endl;


	cin.get();
	cin.get();
	return 0;
}