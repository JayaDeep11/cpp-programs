#include <iostream>

using namespace std;

class Base {
  public:
    void display() {
      cout << "base class";
    }
};

class Derived1: public virtual Base {
  public:
    void display() {
      cout << "Derived1 class" << endl;
    }
};

class Derived2: public virtual Base{
  public:
    void display() {
      cout << "Derived2 class" << endl;
    }
};

class Derived3: public  Derived1, public Derived2 {
  public:

};


int main() {
  Derived3 d3;
   d3.Derived1 :: display();
}