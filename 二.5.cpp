#include<iostream>
using namespace std;
int main() {
	char f;
	int a = 0, b = 0, c = 0,e=0;//aΪ�ո�����bΪ���ָ�����cΪ��ĸ������eΪ�����ַ�������
	cout << "������һ���ַ�" << endl;
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
	cout << "�ո���Ϊ" << a << endl;
	cout << "������Ϊ" << b<< endl;
	cout << "��ĸ��Ϊ" <<c<< endl;
	cout << "�����ַ���Ϊ" << e << endl;
	return 0;
}
