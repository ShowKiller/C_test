#include "stdafx.h";
#include <iostream>
#include <math.h>

int stonetolb(int);

int main03()
{
	using namespace std;
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = " << pounds << "pounds." << endl;
	cin.get();
	cin.get();
	return 0;
}
int stonetolb(int sts)
{
	return 14 * sts;
}