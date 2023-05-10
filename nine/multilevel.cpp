#include <iostream>

using namespace std;

class Animal {
	public:
		void eat() {
			cout << "Animal eating\n";
		}
};

class Mammal: public Animal {
	public:
		void sleep(){
			cout << "Mammal is sleeping\n";
		}
};

class Dog: public Mammal {
	public:
		void bark() {
			cout << "Dog is barking\n";
		}
};

int main() {
	Dog myDog;
	myDog.eat();
	myDog.sleep();
	myDog.bark();
}
