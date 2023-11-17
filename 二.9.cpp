#include<iostream>
using namespace std;
int main() {
	double a = 0.8;//a为苹果价格
	int b = 2, i = 1, n = 0;//b为每天买苹果的个数，i为天数，n为总苹果数
	while (n <= 100) {
		n = n + b;
		if (n > 100) {
			n = n - b;
			--i;
			break;
		}
		b = 2 * b;
		++i;
	}
	double p;
	p = a * n / i;
	cout << "平均每天花钱数为" << p << endl;
	return 0;
}