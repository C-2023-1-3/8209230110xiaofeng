#include<iostream>
#include"mytriangle.h"
using namespace std;
int main() {
	double side1, side2, side3;
	cout << "�����������ε����߳�" << endl;
	while (1) {
cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3) == true) {
		cout << "�������ε����Ϊ" << _area(side1, side2, side3) << endl;
		break;
	}
	else {
		cout << "�������޷����������Σ�����������" << endl;
	}
}
	system("pause");
	return 0;
}