#include <iostream>

using namespace std;

int add(int, int);
double add(int, double);
double add(double, int);
int add(double, double);

int main() {
    cout << add(2, 3) << " : int + int" << endl;
    cout << add(2, 3.14) << " : int + double" << endl;
    cout << add(2.45, 3) << " : double + int" << endl;
    cout << add(2.45, 3.14) << " : double + double" << endl;
}

int add(int a, int b) {
    return a + b;
}

double add(int a, double b) {
    return a + b;
}

double add(double a, int b) {
    return a + b;
}

int add(double a, double b) {
    return a + b;
}