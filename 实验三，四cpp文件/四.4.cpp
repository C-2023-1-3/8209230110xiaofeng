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
cout << "�������һ������Ԫ�ظ��������кõ�����1����ʾ����������Ԫ��������" << endl;
	cin >> num1;
	int* list1 = new int[num1];
	for (int i = 0; i < num1; i++) {
		cin >> list1[i];
	}
	while (1) {
    if (num1 > 80) {
		cout << "�����С������������������1Ԫ�ظ����͸�Ԫ��" << endl;
		cin >> num1;
		for (int i = 0; i < num1; i++) {
			cin >> list1[i];
		}
	}
	else {
		cout << "�ɹ��������ִ����һ��" << endl;
		break;
	}
	}
		
cout << "������ڶ�������Ԫ�ظ��������кõ�����2����ʾ����������Ԫ�ظ�����" << endl;
	
	cin >> num2;
	int* list2 = new int[num2];
	for (int i = 0; i < num2; i++) {
			cin >> list2[i];
		}
	while (1) {
		if (num2 > 80) {
			cout << "�����С������������������2Ԫ�ظ�����Ԫ��" << endl;
			cin >> num2;
			for (int i = 0; i < num2; i++) {
				cin >> list2[i];
			}
		}
		else {
			cout << "����ɹ�" << endl;
			break;
		}

	}
int size1 = num1, size2 = num2;
int* list3 = new int[size1 + size2];
merge(list1, size1, list2, size2, list3);
system("pause");
return 0;
}