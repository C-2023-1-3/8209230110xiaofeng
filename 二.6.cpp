#include<iostream>
using namespace std;
int gy(int a, int b) {
	int temp = a, temp0 = b;
	a = (a > b ? a : b);
	b = (temp > b ? b : temp);
	int c;
		while (b!=0) {
			c = b;
			b = a % b;
			a = c;
		}
	return a;
 }
int main() {
     int a, b;
	 cout << "����������������" << endl;
	 while (1) {
		 cin >> a >> b;
		 if (a <= 0 || b <= 0) {
			 cout << "��������������������" << endl;
		 }
		 else {
			 break;
		 }
	 }
	
	 int d=gy(a, b);
	 int e = (a * b) / d;
	 cout << "���Լ��Ϊ" << d << endl;
	 cout << "��󹫱���Ϊ" << e << endl;
	 return 0;
}