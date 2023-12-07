#include<iostream>
using namespace std;
#include<string>
#include<cstring>
void count(const char s[], int counts[]) {
	string s1 = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < strlen(s); ++i) {
		for (int j = 0; j < 26; j++) {
			if (s[i] == s1[j]||tolower(s[i])==s1[j]) {
				counts[j]++;
			}
		}
	}
	for (int i = 0; i < 26; ++i) {
		if (counts[i] > 0) {
			cout << s1[i] << ":" << counts[i] << "times" << endl;
		}
	}
}
int main() {
	string str;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û´®:" << endl;
	getline(cin, str);
	char* s = new char[str.size()+1];
	for (int i = 0; i < str.size(); ++i) {
		s[i] = str[i];
	}
	s[str.size()]='\0';
	int counts[26];
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	count(s, counts);
	system("pause");
	return 0;
}