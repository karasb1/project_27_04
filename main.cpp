#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	double a, b;
	cin >> a;
	cin >> b;
	(a == b) ? cout << a << " == " << b : (a > b) ? cout << b << " " << a : cout << a << " " << b;

	return 0;
}