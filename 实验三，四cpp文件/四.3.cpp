#include<iostream>
using namespace std;
int main() {
	bool L[100];
	for (int i = 0; i < 100; ++i) {
		L[i] = false;
	}
	for (int i = 0; i < 100; ++i) {
		for (int j = i; j < 100; j = j + i+1 ) {
			if (L[j] == true) {
				L[j] = false;
			}
			else {
				L[j] = true;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		if (L[i] == true) {
			cout << i+1 << " ";
		}
		else {
			continue;
		}
	}
	system("pause");
	return 0;
}