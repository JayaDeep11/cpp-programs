#include <iostream>

using namespace std;

class MyClassTwo {
	public:
		int x, y;
		MyClassTwo() {
			x = 0;
			y = 0;
		}
};

int main() {
	MyClassTwo obj;
	cout << obj.x << endl << obj.y << endl;
	return 0;
}
