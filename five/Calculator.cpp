#include <iostream>

using namespace std;
 
class Calculator {
    public:
        static int add(int x, int y);
        static int subtract(int x, int y);
};

int Calculator :: add(int x, int y) {
    return x + y;
}

int Calculator :: subtract(int x, int y = 0) {
    return x - y;
}

int main() {
    int a = 5, b = 2;
    cout << "Sum: " << Calculator :: add(a, b) << endl;
    cout << "Difference: " << Calculator :: subtract(a) << endl;
}