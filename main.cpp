#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int a, b, c, d, e, f, g;
	cin >> a;
	cin >> b;
	if (a < b) {
		a = b;
	}
	cin >> c;
	if (a < c) {
		a = c;
	}
	cin >> d;
	if (a < d) {
		a = d;
	}
	cin >> e;
	if (a < e) {
		a = e;
	}
	cin >> f;
	if (a < f) {
		a = f;
	}
	cin >> g;
	if (a < g) {
		a = g;
	}
	cout << a;
	return 0;
}