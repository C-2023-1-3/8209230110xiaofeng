#include<iostream>
using namespace std;
int ct(int& a,int&b) {
	a = 2 * (a + 1);
	b++;
	if (b <= 10) {
      ct(a,b);
	}
	else {
		return a;
	}
}
int main() {
	int a = 1, b = 1;//a为桃子数量
	cout << "猴子第一天共摘桃子个数为：" << ct(a, b) << endl;
	system("pause");
	return 0;
}