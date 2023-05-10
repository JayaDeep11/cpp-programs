#include <iostream> 

using namespace std;

class Animal {
	public:
		void eat() {
			cout << "Animal is Eating" << endl;
		}
};

class Cat: public Animal {
	public:
		void meow() {
			cout << "Cat is meowing" << endl;
		}
};

class Dog: public Animal {
	public:
		void bark() {
			cout << "Dog is barking" << endl;
		}
};

int main() {
	Cat myCat;
	Dog myDog;
	myCat.eat();
	myCat.meow();
	myDog.eat();
	myDog.bark();
	return 0;
}
