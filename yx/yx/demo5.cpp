#include "stdafx.h"
#include <iostream>
#include <string>
//int main()
//{
//	using namespace std;
//	string name;
//	char temp;
//	cin >> name;
//	int i, j;
//
//	for (i = 0,j = name.size()-1; i < j;--j, ++i)
//	{
//		temp = name[i];
//		name[i] = name[j];
//		name[j] = temp;
//		
//	}
//	cout << name << endl;
//
//	return 0;
//}

int main_0002()
{
	using namespace std;
	string word = "?ate";
	for (char ch = 'a'; word != "mate"; ch++) {
		cout << word << endl;
		word[0] = ch;
	}

	cout << word <<endl ;


	return 0;
}