#include "stdafx.h"
#include <iostream>

int main111()
{
	using namespace std;
	double sum1,sum2;
	sum1 = sum2 = 0.0;
	int year = 0;
	while (sum2<=sum1)
	{
		++year;
		sum1 += 10;
		sum2 = (100 + sum2)*0.05 + sum2;
		cout << sum2<<endl;
	}
	cout << year<<endl;
	cout << sum1 << endl << sum2 << endl;
	cin.get();
	return 0;
}