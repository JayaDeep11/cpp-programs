#include <iostream>

using namespace std;

class Student {
  private:
    string name;
    int age, rnum;

  public:
    Student(string name, int age, int rnum) {
      cout << "Constructor called" << endl;
      this -> name = name;
      this -> age = age;
      this -> rnum = rnum;
    }
    ~Student() {
      cout << "Destructor called!" << endl;
    }
};

int main() {
  Student a("phani", 13, 12), b("kepler", 13, 13), c("newton", 12, 14);
  cout << 1 << endl;
  cout << 2 << endl;
  cout << 3 << endl;
  return 0;
}