#include <iostream>

using namespace std;

class Distance
{
    public:
        int feet, inches;
        Distance()
        {
            feet = 0;
            inches = 0;
        }
        Distance(int f, int i)
        {
            feet = f;
            inches = i;
        }

        // - minus Unary Operator Overloading:
        Distance operator -()
        {
            feet = -feet;
            inches = -inches;
            return Distance(feet, inches);
        }

        // ++ Unary Operator Overloading:
        Distance operator ++()
        {
            feet = ++ feet;
            inches = ++ inches;
            return Distance(feet, inches);
        }

        // - Binary Operator Overloading:
        Distance operator -(const Distance &obj)
        {
            return Distance(feet - obj.feet, inches - obj.inches);
        }

        // Display Distance
        void displayDistance()
        {
            cout << "Feet: " << feet << "   " << "Inches: " << inches;
        }
};

int main()
{
    Distance d1(10, 11), d2(2, -3), d3;
    d3 = d1 - d2;
    cout << "d3 = d1 - d2  :  ";
    d3.displayDistance();

    -d1;
    cout << endl << "-d1 : ";
    d1.displayDistance();

    ++d2;
    cout << endl << "++d2 : ";
    d2.displayDistance();
    cout << endl;
}