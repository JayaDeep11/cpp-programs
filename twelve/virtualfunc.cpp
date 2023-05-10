#include <iostream>

using namespace std;

class Shape {
  public:
    virtual void draw() {
      cout << "Drawing a Shape" << endl;
    }
};

class Circle: public Shape {
  public:
    void draw() {           //over-ride
      cout << "Drawing circle" << endl;
    }
};

class Square: public Shape {
  public:
    void draw() {
      cout << "Drawing Square" << endl;
    }
};

int main() {
  Shape *ptr;
  Circle c;
  Square s;
  ptr = &c;
  ptr -> draw();
  ptr = &s;
  ptr -> draw();
  return 0;
}