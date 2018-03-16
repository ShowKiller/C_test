#include "stdafx.h"
#include <iostream>
#include <climits>


int main3_1()
{
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "long long is " << sizeof n_llong << " bytes." << endl;
	cout << endl;

	cout << "Maximum value: " << endl;
	cout << "short:  " << n_short << endl;
	cout << "int:  " << n_int << endl;
	cout << "long:  " << n_long << endl;
	cout << "long long:  " << n_llong << endl << endl;

	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "Bit per byte = " << CHAR_BIT << endl;
	cin.get();
	return 0;


}