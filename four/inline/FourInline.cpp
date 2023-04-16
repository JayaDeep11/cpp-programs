#include <iostream>
#include <chrono>

using namespace std;
using namespace std ::chrono;

inline int add(int a, int b) {
    return a + b;
}
int add1(int a, int b) {
    return a + b;
}
int main() {
    int x = 10;
    int y = 20;
    int sum = 0;

    auto start = high_resolution_clock ::now();
    for(int i = 0; i < 1000000000; i++) {
        sum = add(x, y);
    }
    auto stop = high_resolution_clock ::now();

    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by inline function:" << duration.count() << " microseconds" << endl;


    auto start1 = high_resolution_clock::now();
    for(int i = 0; i < 1000000000; i++) {
        sum = add1(x, y);
    }
    auto stop1 = high_resolution_clock::now();

    auto duration1 = duration_cast<microseconds>( stop1 - start1);
    cout << "Time taken by normal function:" << duration1.count() << " microseconds" << endl;
}