#include <iostream>

using namespace std;

int sum(int a, int b, int c = 0) {
    return a + b + c;
}

int main() {
    int s1 = sum(1, 2);
    int s2 = sum(1, 3, 5);
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
}