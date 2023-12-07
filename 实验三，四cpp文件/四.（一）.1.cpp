#include<iostream>
using namespace std;
int main() {
	int a[10],d[10];
	int b = 0;
	cout << "ÇëÊäÈë10¸öÊý" << endl;
	for (int i = 0; i < 10; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++) {
		bool ac = true;
		for (int j = 0; j < i; ++j) {
			if (a[i]==a[j]) {
				ac = false;
			}
		}
		if (ac == true) {
			d[i - b] = a[i];
		}
		else {	
			b++;
		}
	}
	int *c=new int[10 - b];
	for (int i = 0; i < 10 - b; ++i) {
		c[i] = d[i];
		cout << c[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}