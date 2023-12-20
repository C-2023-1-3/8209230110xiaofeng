#include<iostream>
using namespace std;
class Time  {        
public: 
	void sethour() {
		cin >> this->hour;
	}
	void setminute() {
		cin >> this->minute ;
	}
	void setsec() {
		cin >> this->sec;
	}
	int showhour() {
		return this->hour;
	}
	int showminute() {
		return this->minute;
	}
	int showsec() {
		return this->sec;
	}

private:
	int hour;
	int minute;
	int sec;
};

int main()
{
	Time tl;          
	tl.sethour();     
	tl.setminute();
	tl.setsec();
	cout << tl.showhour() << ":" << tl.showminute() << ":" << tl.showsec() << endl;
	system("pause");
	return 0;
}