#include<iostream>
using namespace std;
double pfg(double a, double xn, double xn1) {
	int j = 0;
	while (1) {	
			if (j == 0) {
				xn = xn;
			}
			else {
				xn = xn1;
			}
			xn1 = (1.0 / 2.0) * (xn + (a / xn));
			++j;
			if (fabs(xn1 - xn) < 1e-5) {
				break;
			}
	}
	return xn1;
}//����ȡƽ�����ĺ���

int main() {
	double a, xn, xn1=0;
	cout << "������һ����" << endl;
	cin >> a;
    xn = a;
	double t;
	if (a >= 0) {
       t = pfg(a, xn, xn1);
	   cout << "a��ƽ����Ϊ" << t << endl;
	}
	else {
		double d = fabs(a);
		cout << "a��ƽ����Ϊ" << (-1)*pfg(d, xn, xn1) << "*i" << '\t' << "(ע��i*i=-1)" << endl;
	}
	system("pause");
	return 0;
}