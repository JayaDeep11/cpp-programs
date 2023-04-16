#include <iostream>
#include <stdlib.h>

using  namespace std;

class Student
{
    string name;
    int age;

    public:
        Student()
        {
            cout << "Constructor is called\n";
        }
        Student(string name, int age)
        {
            this -> name = name;
            this -> age = age;
        }
        void display()
        {
            cout << "name: " << name << endl;
            cout << "age: " << age << endl;
        }
        void * operator new(size_t size)
        {
            cout << "Overloading new operator with size: " << size << endl;
            void * p = :: operator new(size);
            return p;
        }
        void operator delete(void * p)
        {
            cout << "Overloading delete operator " << endl;
            free(p);
        }

};

int main()
{
    Student * p = new Student("panini", 18);
    p -> display();
    delete p;
}