#include<iostream>
#include<string>
using namespace std;
class Student {
public:
	friend void max(Student s[]);
	friend istream& operator>>(istream& cin, Student& s);
private:
	string id;
	int score=0;
};
istream& operator>>(istream& cin, Student& s) {
	cin >> s.id >> s.score;
	return cin;
}
void max(Student s[]) {
	for (int i = 0; i < 4; ++i) {
		if (s[i].score > s[i + 1].score) {
			Student temp=s[i];
			s[i] = s[i + 1];
			s[i + 1] = temp;
		}
	 }
	cout << "�����ѧ���гɼ������ѧ��Ϊ��" << s[4].id << endl;
}
int main() {
	Student s[5];
	cout << "������5��ѧ����ѧ�źͳɼ�" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> s[i];
	}
	max(s);
	cout << endl;
	system("pause");
	return 0;
}