#include<iostream>
using namespace std;
void comparison(int* s1, int num) {
	for (int i = 0; i < num-1; ++i) {
		for (int j = 0; j < num - 1 - i; ++j) {
			if (s1[j] > s1[j + 1]) {
				int temp = s1[j];
				s1[j] = s1[j + 1];
				s1[j + 1] = temp;
			}
		}
	}
}
int main() {
	int num;
	cout << "请输入数组元素个数及各元素的值" << endl;
	cin >> num;
	int* s1 = new int[num];
	for (int i = 0; i < num; i++) {
		cin >> s1[i];
	}
	for (int i = 0; i < num; i++) {
		cout << *s1 << " " << s1 << endl;
		s1++;
	}
	s1 = s1 - num;
	comparison(s1, num);
	for (int i = 0; i < num; i++) {
		cout << *(s1+i) << "  ";
	}
	cout << endl;
	delete[]s1;
	system("pause");
	return 0;
}