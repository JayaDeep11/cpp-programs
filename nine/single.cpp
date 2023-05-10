#include <iostream>

using namespace std;

class Animal {
	public:
		string name;
		
	private:
		int age;
		
	protected:
		string breed;
};

class Dog: protected Animal {
	public:
		void pub() {
			cout << "pub is " << name << endl;
		}
		
//		void pvt() {
//			cout << "pvt is " << age << endl;
//		}
		
//		void prct() {
//			cout << "prct is "<< breed << endl;
//		}
};


int main() {
	Dog myDog;
	myDog.pub();
//	myDog.pvt();
//	myDog.prct();
	return 0;
}
