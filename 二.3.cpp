#include<iostream>
using namespace std;
int main() {
	double a, b, c,l;
	cin >> a >> b >> c;
	l = a + b + c;
	if (a + b > c && a + c > b && b + c > a) {
		if (a == b || a == c || b == c) {
			cout << "是等腰三角形" << endl;
		}
		else {
			cout << "不是等腰三角形" << endl;
		}
		cout << "周长为" << l << endl;
	}
	else {
		cout << "无法构成三角形，无周长" << endl;
	}
	return 0;
}