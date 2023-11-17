#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double h, s;//h为华氏度，s为摄氏度
	cin >> h;//输入华氏度
	s = 5.0 / 9.0 * (h - 32);
	cout << "摄氏度为" <<fixed<<setprecision(2)<< s; 
	return 0;
}