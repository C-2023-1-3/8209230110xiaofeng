#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2, result;

    cout << "Enter two numbers and operator (+, -, *, /, %) ";
    cin >> num1 >>op>> num2;

    switch (op) {
    case '+':
        result = num1 + num2;
        cout << "Result= " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "Result= " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "Result= " << result << endl;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Result= " << result << endl;
        }
        else {
            cout << "错误分母不能为0" << endl;
        }
        break;
    case '%':
        if (num2 != 0) {
            result = fmod(num1, num2);
            cout << "Result= " << result << endl;
        }
        else {
            cout << "错误，分母不能为0" << endl;
        }
        break;
    default:
        cout << "错误，运算符非法" << endl;
    }

    return 0;
}
