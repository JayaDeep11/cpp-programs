#include <iostream>

using namespace std;

float calculateArea(float length, float width = 4.0f) {
    return length * width;
}

int main() {
    // float area1 = calculateArea();
    float area2 = calculateArea(3.0f);
    float area3 = calculateArea(2.5f, 5.0f);
    cout  << "  " << area2 << "  " << area3 << endl;
}