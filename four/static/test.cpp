#include <iostream>

using namespace std;

void counter();

int main()
{
    int x;
    counter();
    counter();
    counter();
    counter();
}

void counter()
{
    static int count = 0;
    count++;
    cout << "No. of times called: " << count << endl;
}

