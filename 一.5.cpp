#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double h, s;//hΪ���϶ȣ�sΪ���϶�
	cin >> h;//���뻪�϶�
	s = 5.0 / 9.0 * (h - 32);
	cout << "���϶�Ϊ" <<fixed<<setprecision(2)<< s; 
	return 0;
}