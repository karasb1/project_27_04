#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int a, b, c, d, s1, s2;
	int s = 300;
	cout << "Enter the weight of the load: ";
	cin >> a;
	if (a > 2000) {
		cout << "Too much weight";
		return 0;
	}
	cout << "Enter the distance from A to B: ";
	cin >> b;
	cout << "Enter the distance from B to C: ";
	cin >> c;
	if (a < 500) {
		s1 = b;
		s2 = c;
		if (s1 > 300 || s2 > 300) {
			cout << "Too long distance";
		}
		else {
			if (s1 + s2 < 300) {
				cout << "0" << endl;
			}
			else {
				d = s1 + s2 - 300;
				cout << d << endl;
			}
		}
	}
	if (a < 1000 && a > 499) {
		s1 = b;
		s2 = c;
		if (s1 > 75 || s2 > 75) {
			cout << "Too long distance";
		}
		else {
			if (s1 + s2 < 75) {
				cout << "0" << endl;
			}
			else {
				d = (s1 + s2 - 75) * 4;
				cout << d << endl;
			}
		}
	}
	if (a < 1500 && a > 999) {
		s1 = b;
		s2 = c;
		if (s1 > 43 || s2 > 43) {
			cout << "Too long distance";
		}
		else {
			if (s1 + s2 < 43) {
				cout << "0" << endl;
			}
			else {
				d = (s1 + s2 - 43) * 7;
				cout << d << endl;
			}
		}
	}
	if (a < 2000 && a > 1499) {
		s1 = b;
		s2 = c;
		if (s1 > 33 || s2 > 33) {
			cout << "Too long distance";
		}
		else {
			if (s1 + s2 < 33) {
				cout << "0" << endl;
			}
			else {
				d = (s1 + s2 - 33) * 9;
				cout << d << endl;
			}
		}
	}
	return 0;
}