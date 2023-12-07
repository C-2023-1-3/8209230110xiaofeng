#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString) {
	int* decstring = new int[strlen(hexString)];
	for (int i = 0; i < strlen(hexString); ++i) {
		switch (hexString[i])
		{
		case 'A':decstring[i] = pow(16, strlen(hexString) - i-1) * 10; break;
        case 'B':decstring[i] = pow(16, strlen(hexString)-i-1) * 11;break;
        case 'C':decstring[i] = pow(16, strlen(hexString)-i-1) * 12;break;
        case 'D':decstring[i] = pow(16, strlen(hexString)-i-1) * 13;break;
        case 'E':decstring[i] = pow(16, strlen(hexString)-i-1) * 14;break;
        case 'F':decstring[i] = pow(16, strlen(hexString)-i-1) * 15;break;
        case '1':decstring[i] = pow(16, strlen(hexString)-i-1) * 1;break;
        case '2':decstring[i] = pow(16, strlen(hexString)-i-1) * 2;break;
        case '3':decstring[i] = pow(16, strlen(hexString)-i-1) * 3;break;
        case '4':decstring[i] = pow(16, strlen(hexString)-i-1) * 4;break;
        case '5':decstring[i] = pow(16, strlen(hexString)-i-1) * 5;break;
        case '6':decstring[i] = pow(16, strlen(hexString)-i-1) * 6;break;
        case '7':decstring[i] = pow(16, strlen(hexString)-i-1) * 7;break;
        case '8':decstring[i] = pow(16, strlen(hexString)-i-1) * 8;break;
        case '9':decstring[i] = pow(16, strlen(hexString)-i-1) * 9;break;	
		}
	}
	int sum=0;
	for (int i = 0; i < strlen(hexString); ++i) {
		sum += decstring[i];
	}
	return sum;
}
int main() {
	string str;
	cout << "请输入一个16进制数的字符串" << endl;
	cin >> str;
	char* hexString = new char[str.size() + 1];
	for (int i = 0; i < str.size(); ++i) {
		hexString[i] = str[i];
	}
	hexString[str.size()] = '\0';
	int ret = parseHex(hexString);
	cout << str << "的10进制为：" << ret << endl;
	system("pause");
	return 0;
}