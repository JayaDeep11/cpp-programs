#include <iostream>

using namespace std;

class MathLibrary {
    public:
        static int factorial(int n) {
            if(n == 0) {
                return 1;
            }
            return n * factorial(n - 1);
        }
};

int main() {
    cout << "Factorial of " << MathLibrary :: factorial(4) << endl;
}