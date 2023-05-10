#include <iostream>

using namespace std;

class Animal {
	public:
		void eat() {
			cout << "Animal is eating\n";
		}
};

class Bird {
	public:
		void fly() {
			cout << "Bird is flying\n";
		}
		
		void eat() {
			cout << "Bird is eating\n";
		}
};

class Eagle: public Animal, public Bird {
	public:
		void hunt() {
			cout << "Eagle is Hunting\n";
		}
};

int main() {
	Eagle myEagle;
	myEagle.eat();
	myEagle.fly();
	myEagle.hunt();
}
