#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	for (int i = 0; i < size1 + size2; ++i) {
		if (i < size1) {
			list3[i] = list1[i];
		}
		else {
			list3[i] = list2[i - size1];
		}
	}
		for (int j = 0; j < size1 + size2 - 1; j++) {
			for (int k = 0; k < size1 + size2-1- j; ++k) {
				if (list3[k] > list3[k + 1]) {
					int temp = list3[k];
					list3[k] = list3[k + 1];
					list3[k + 1] = temp;
				}
			}
		}
		cout << "The merge list is:";
		for (int a = 0; a < size1 + size2; ++a) {
			cout << list3[a] << " ";
		}
		cout << endl;
	};
int main() {
int num1, num2;
cout << "请输入第一个数组元素个数和排列好的数组1（提示：请先输入元数个数）" << endl;
	cin >> num1;
	int* list1 = new int[num1];
	for (int i = 0; i < num1; i++) {
		cin >> list1[i];
	}
	while (1) {
    if (num1 > 80) {
		cout << "数组大小过大，请重新输入数组1元素个数和各元素" << endl;
		cin >> num1;
		for (int i = 0; i < num1; i++) {
			cin >> list1[i];
		}
	}
	else {
		cout << "成功，请继续执行下一步" << endl;
		break;
	}
	}
		
cout << "请输入第二个数组元素个数和排列好的数组2（提示：请先输入元素个数）" << endl;
	
	cin >> num2;
	int* list2 = new int[num2];
	for (int i = 0; i < num2; i++) {
			cin >> list2[i];
		}
	while (1) {
		if (num2 > 80) {
			cout << "数组大小过大，请重新输入数组2元素个数和元素" << endl;
			cin >> num2;
			for (int i = 0; i < num2; i++) {
				cin >> list2[i];
			}
		}
		else {
			cout << "输入成功" << endl;
			break;
		}

	}
int size1 = num1, size2 = num2;
int* list3 = new int[size1 + size2];
merge(list1, size1, list2, size2, list3);
system("pause");
return 0;
}