#include <iostream>

using namespace std;

string formatString(string str, int width = 3, bool leftJustify = true) {
    if(leftJustify) {
        return str.substr(0, width);
    } else {
        return str.substr(str.length() - width, width);
    }
}

int main() {
    string str1 = formatString("Hello World!");
    string str2 = formatString("Hello World!", 5);
    string str3 = formatString("Hello World!", 8, false);
    cout << str1 << endl << str2 << endl << str3 << endl;
}