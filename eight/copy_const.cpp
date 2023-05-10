#include <iostream>

using namespace std;

class MyClassThree {
	public:
		int x, y;
		MyClassThree() {
			
		}
		MyClassThree(int a, int b) {
			x = a;
			y = b;
		}
		MyClassThree(const MyClassThree &other) {
			x = other . x;
			y = other . y;
		}
};

int main() {
	MyClassThree obj1(3, 9);
	MyClassThree obj2;
	obj2 = obj1;
	cout << obj1.x << endl << obj1.y << endl;
	cout << obj2.x << endl << obj2.y << endl;
}
