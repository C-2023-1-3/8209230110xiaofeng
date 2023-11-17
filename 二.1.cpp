#include<iostream>
using namespace std;
int main() {
	char a;
	cin >> a;
	if (islower(a)) {
		cout<<(char)toupper(a)<<endl;
	}
	else {
		cout << (int)a<<endl;
	}
	return 0;
}