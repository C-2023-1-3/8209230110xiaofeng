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
	 cout << "请输入两个正整数" << endl;
	 while (1) {
		 cin >> a >> b;
		 if (a <= 0 || b <= 0) {
			 cout << "请重新输入两个正整数" << endl;
		 }
		 else {
			 break;
		 }
	 }
	
	 int d=gy(a, b);
	 int e = (a * b) / d;
	 cout << "最大公约数为" << d << endl;
	 cout << "最大公倍数为" << e << endl;
	 return 0;
}