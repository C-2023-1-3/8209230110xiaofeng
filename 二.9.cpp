#include<iostream>
using namespace std;
int main() {
	double a = 0.8;//aΪƻ���۸�
	int b = 2, i = 1, n = 0;//bΪÿ����ƻ���ĸ�����iΪ������nΪ��ƻ����
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
	cout << "ƽ��ÿ�컨Ǯ��Ϊ" << p << endl;
	return 0;
}