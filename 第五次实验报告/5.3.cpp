#include<iostream>
using namespace std;
class cube {
public:
	friend istream& operator>>(istream& cin, cube& c);
	double volume() {
		double temp;
		temp = length * width * height;
		return temp;
	}
private:
	double length, width,height;
};
istream& operator>>(istream& cin, cube& c) {
	cin >> c.length >> c.width >> c.height;
	return cin;
}
ostream& operator<<(ostream& cout, cube& c) {
	cout << c.volume();
	return cout;
}
int main() {
	cube c[3];
	cout << "��ֱ���������������ĳ����" << endl;
	for (int i = 0; i < 3; ++i) {
         cin >> c[i];
	}
	for (int i = 0; i < 3; ++i) {
     cout<<"��" <<i << "������������Ϊ" << c[i] << endl;
	}
	system("pause");
	return 0;
}