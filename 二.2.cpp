#include<iostream>
using namespace std;
int main()
{
	double x,y;
	cout << "输入一个数" << endl;
	cin >> x;
	if (x < 10 && x>0) {
		if (x > 0 && x < 1) {
			y = 3.0 - 2.0 * x;
		}
		else if (x >= 1 && x < 5) {
			y = 2.0 / (4.0 * x) + 1;
		}
		else {
			y = x * x;
		}
		cout << y << endl;
	}
	else {
		system("pause");
	}

	return 0;
}