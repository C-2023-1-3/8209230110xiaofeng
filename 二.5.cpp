#include<iostream>
using namespace std;
int main() {
	char f;
	int a = 0, b = 0, c = 0,e=0;//a为空格数，b为数字个数，c为字母个数，e为其他字符个数。
	cout << "请输入一行字符" << endl;
	while (1) {
		cin.get(f);
		if (f == ' ') {
			++a;
		}
		else if (isdigit(f)) {
			++b;
		}
		else if (isalpha(f)) {
			++c;
		}
		else if (f == '\n') {
			break;
		}
		else {
			++e;
		}
	}
	cout << "空格数为" << a << endl;
	cout << "数字数为" << b<< endl;
	cout << "字母数为" <<c<< endl;
	cout << "其他字符数为" << e << endl;
	return 0;
}
