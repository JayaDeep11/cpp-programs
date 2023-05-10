#include <iostream>

using namespace std;

class Animal {
	public:
		void eat() {
			cout << "Animal is eating\n";
		}
		
		private:
			int age;
			
		protected:
			string breed;
};

class Dog: public Animal {
	public:
		void bark() {
			cout << "Dog is barking\n";
		}
};


int main() {
	Dog myDog;
	myDog.eat();
	myDog.bark();
	cout << myDog.age;
	cout << myDog.breed;
	return 0;
}
