#include "stdafx.h"
#include <iostream>
#include <string>
#pragma warning(disable:4996)
using namespace std;
char * getname(void);

int main4_0000001()
{
	char * name;
	name = getname();
	cout << *(name+1) << " at " << (int *)name << endl;
	delete [] name;

	name = getname();
	cout << name << " at " << (int *)name << endl;
	delete [] name;

	cin.get();
	cin.get();
	return 0;
}
char * getname()
{
	char temp[80];
	cout << "Enter last name: ";
	cin >> temp;
	char * pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);
	return pn;
}