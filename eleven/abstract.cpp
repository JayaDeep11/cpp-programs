#include <iostream>

using namespace std;

class AbstractBase {
  public:
    virtual void doSomething() = 0;
};

class Derived: public AbstractBase {
  public:
    void doSomething() {
      cout << "doSomething def in Derived class" << endl;
    }
};

int main() {
  Derived obj;
  obj.doSomething();

  AbstractBase *ptr;
  ptr = &obj;
  ptr -> doSomething();
}