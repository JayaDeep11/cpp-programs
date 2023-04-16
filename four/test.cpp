#include <iostream>

using namespace std;

class Abc {
    private:
        int a;
    protected:
        int b;
    public:
        int c;

        void display() {
            cout << "a : " << a << endl;
            cout << "b : " << b << endl;
            cout << "c : " << c << endl;
        }

        Abc() {
            a = 10;
            b = 20;
            c = 30;
        }

};

int main() {
    Abc obj;
    // cout << obj.a;
    // cout << obj.b;
    // cout << obj.c << endl;
    obj.display();
}
