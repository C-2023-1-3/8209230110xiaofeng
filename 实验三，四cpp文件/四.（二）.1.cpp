#include<iostream>
using namespace std;
#include<string>
#include<cstring>

int indexOf(const char*s1, const char*s2) {
	int num = 0, stage = 0, num1 = 0;
	for (int i = 0; i < strlen(s2); ++i) {

		if (s2[i] == s1[0]) {
			for (int k = 0; k <= i; ++k) {
				if (s2[k] == ' ') {
					++num1;
				}
			}
			for (int j = 0; j < strlen(s1); ++j) {
				if (s1[j] == s2[i + j]) {
					++num;
				}
				else {
					break;
				}
			}
			if (num == strlen(s1)) {
				stage = i + 1 - num1;
			}
			else {
				num = 0;
			}
		}
	}
	if (num == strlen(s1)) {
		return stage;
	}
	else {
		return -1;
	}
}
int main() {
	string str1, str2;
	cout << "ÇëÊäÈë×Ö·û´®1" << endl;
	getline(cin, str1);
	char* s1 = new char[str1.size() + 1];
	for (int i = 0; i < str1.size(); ++i) {
		s1[i] = str1[i];
	}
	s1[str1.size()] = '\0';
	cout << "ÇëÊäÈë×Ö·û´®2" << endl;
	getline(cin, str2);
	char* s2 = new char[str2.size() + 1];
	for (int i = 0; i < str2.size(); ++i) {
		s2[i] = str2[i];
	}
	s2[str2.size()] = '\0';
	int ret = indexOf(s1, s2);
	cout << "indexOf(" << str1 << "," << str2 << ")is:" << ret;
	system("pause");
	return 0;
}