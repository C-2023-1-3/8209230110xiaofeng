#include<iostream>
using namespace std;
int main() {
	const double p = 3.14;
    double r, h;//�뾶r,׶��h;
	cout << "����뾶�͸�" << endl;
	cin >> r >> h;
	double v;//vΪ���
	v = 1.0/ 3.0 * p * r * r * h;//Բ׶�����ʽ
	cout << v << endl;
	return 0;
}