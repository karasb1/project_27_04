#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int a;
	cin >> a;
	(a / 100000 < 0 || a / 100000 > 10) ? cout << "Enter a six-digit number" : (((a / 100000) + (a % 100000 / 10000) + (a % 10000 / 1000)) == ((a % 1000 / 100) + (a % 100 / 10) + (a % 10))) ? cout << "It`s a six-digit number" : cout << "This is not a six-digit number";
	


	return 0;
}