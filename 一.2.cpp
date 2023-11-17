#include<iostream>
using namespace std;
int main() {
	const double p = 3.14;
    double r, h;//半径r,锥高h;
	cout << "输入半径和高" << endl;
	cin >> r >> h;
	double v;//v为体积
	v = 1.0/ 3.0 * p * r * r * h;//圆锥体积公式
	cout << v << endl;
	return 0;
}