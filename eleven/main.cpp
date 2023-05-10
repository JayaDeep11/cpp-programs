#include <iostream>

using namespace std;

class Student {
  protected:
    string name;
    int age;
  public:
    Student(const string &_name, int _age): name(_name), age(_age) {}
    virtual void display() = 0;
    void setName(const string &_name) {
      name = _name;
    }
    void setAge(int _age) {
      age = _age;
    }
};

class EngineeringStudent: public Student {
  public:
    EngineeringStudent(const string &_name, int _age): Student(_name, _age) {}
    void display() {
      cout << "Engineering Student name: " << name << " age: " << age << endl;
    }
};

class ScienceStudent: public Student {
  public:
    ScienceStudent(const string &_name, int _age): Student(_name, _age) {}
    void display() {
      cout << "Science Student name: " << name << " age: " << age << endl;
    }
};

class MedicalStudent: public Student {
  public:
    MedicalStudent(const string &_name, int _age): Student(_name, _age) {}
    void display() {
      cout << "Medical Student name: " << name << " age: " << age << endl;
    }
};

int main() {
  EngineeringStudent e("Shanmukh", 19);
  e.display();
  MedicalStudent m("Kulvanth", 19);
  m.display();
  ScienceStudent s("Shree Ram", 18);
  s.display();

  Student * students[] = {&e, &m, &s};
  for(Student * s : students) {
    s -> display();
  }
  return 0;
}