#include<iostream>
using namespace std;
int main()
{
	//Int i = k + 1;//int中的i应小写，未初始化变量k
	int k = 0;
	int i = k + 1;
	cout << i++ << endl;
	//int i = 1;//重定义了i,删去int.
	i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}