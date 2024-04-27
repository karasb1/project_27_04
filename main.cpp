#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	double a;
	cin >> a;
	(a > 0) ? cout << a << " > 0" : (a < 0) ? cout << a << " < 0" : cout << a << " = 0";

	return 0;
}