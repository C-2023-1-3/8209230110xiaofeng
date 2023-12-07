#include<iostream>
using namespace std;
bool is_prime(int num);
int main() {
	int i = 1;
	int j = 0;
	while (1) {
		if (is_prime(i) == true) {
			cout << i << '\t';
			++j;
			if (j % 10 == 0) {
			cout << endl;
		};
		};
		
		if (j == 200) {
			break;
		};
		++i;
	}
	system("pause");
	return 0;
}
bool is_prime(int num) {
	int i=2;
	while (i < num) {
		int j;
		j = num % i;
		if (j == 0) { 
			return false;
		}
		i++;
	}
	if (i == num ) {
			return true;
	}
	else {
		return false;
	}
}