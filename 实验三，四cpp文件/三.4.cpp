#include<iostream>
#include"mytriangle.h"
using namespace std;
int main() {
	double side1, side2, side3;
	cout << "请输入三角形的三边长" << endl;
	while (1) {
cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3) == true) {
		cout << "该三角形的面积为" << _area(side1, side2, side3) << endl;
		break;
	}
	else {
		cout << "该三边无法构成三角形，请重新输入" << endl;
	}
}
	system("pause");
	return 0;
}