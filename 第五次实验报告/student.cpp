#include <iostream>
#include<cstring>
using namespace std;
#include"student.h"            
void Student::display()     
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value(int num, const char name[], char sex) {
    this->num = num;
    int i = 0;
    /*for (; i < strlen(name); ++i) {
        this->name[i] = name[i];
    }
    this->name[i + 1] = '\0';*/
    strcpy_s(this->name, sizeof(this->name), name);
    this->sex = sex;
}
