#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int a;
	cin >> a;
	(a / 1000 < 0 || a / 1000 > 10) ? cout << "Enter a four-digit number" : cout << (a%1000/100*1000)+(a/1000*100)+(a%100/10)+(a%10*10);

	return 0;
}