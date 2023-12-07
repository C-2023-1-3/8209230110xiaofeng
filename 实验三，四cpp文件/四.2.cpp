#include<iostream>
using namespace std;
void bubble(double* list, int listsize) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listsize-1; j++)
			if (list[j] > list[j + 1])
			{
				swap (list[j] , list[j + 1]);
				changed = true;
			}
	} while (changed);
}
int main() {
	double a[10];
	cout << "ÇëÊäÈë10¸öÊý×Ö" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	bubble(a, 10);
	for (int i = 0; i < 10; i++) {
		cout << a[i] <<"  ";
	}
	cout << endl;
	system("pause");
	return 0;
}