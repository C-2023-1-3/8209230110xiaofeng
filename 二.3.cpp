#include<iostream>
using namespace std;
int main() {
	double a, b, c,l;
	cin >> a >> b >> c;
	l = a + b + c;
	if (a + b > c && a + c > b && b + c > a) {
		if (a == b || a == c || b == c) {
			cout << "�ǵ���������" << endl;
		}
		else {
			cout << "���ǵ���������" << endl;
		}
		cout << "�ܳ�Ϊ" << l << endl;
	}
	else {
		cout << "�޷����������Σ����ܳ�" << endl;
	}
	return 0;
}