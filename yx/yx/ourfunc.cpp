#include "stdafx.h";
#include <iostream>
#include <math.h>

void simon(int);

int main02()
{
	using namespace std;
	simon(3);
	cout << "Pick an integer:  ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
	cin.get();
	cin.get();
	return 0;
}
void simon(int n)
{
	using namespace std;
	cout << "Simon says touch your toes " << n << " times. " << endl;

}