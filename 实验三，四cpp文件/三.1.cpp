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
}//�����Լ���ĺ���
int gb(int& a, int& b) {
	int tempa = a, tempb = b;
	a > b ? a = a, b = b : a = tempb, b = tempa;
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return tempa * tempb / a;
}//����С�������ĺ���
int main() {
	int m, n;
	cout << "������������Ȼ��" << endl;
	cin >> m >> n;
	int tempm = m,temp1=m, tempn = n,temp2=n;
	cout << m<< "��" << n << "���Լ��Ϊ" << gy(tempm, tempn) << "����С������Ϊ" << gb(temp1, temp2) << endl;
	system("pause");
	return 0;
}