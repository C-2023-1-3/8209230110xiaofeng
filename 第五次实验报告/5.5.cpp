#include<iostream>
using namespace std;
class point {
public:
	point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void setPoint(int i, int j) {
		this->x += i;
		this->y += j;
	}
	void display() {
		cout << "该点坐标为：" << "(" << this->x << "," << this->y << ")" << endl;
	}
private:
	int x;
	int y;
};
int main() {
	point p(60, 80);
	p.setPoint(7, 9);
	p.display();
	system("pause");
	return 0;
}