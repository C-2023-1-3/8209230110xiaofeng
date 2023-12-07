#include<iostream>
using namespace std;
int gy(int& a, int& b) {
	int tempa = a, tempb = b;
	a > b ? a = a,b=b : a = tempb,b=tempa;
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}//求最大公约数的函数
int gb(int& a, int& b) {
	int tempa = a, tempb = b;
	a > b ? a = a, b = b : a = tempb, b = tempa;
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return tempa * tempb / a;
}//求最小公倍数的函数
int main() {
	int m, n;
	cout << "请输入两个自然数" << endl;
	cin >> m >> n;
	int tempm = m,temp1=m, tempn = n,temp2=n;
	cout << m<< "与" << n << "最大公约数为" << gy(tempm, tempn) << "，最小公倍数为" << gb(temp1, temp2) << endl;
	system("pause");
	return 0;
}